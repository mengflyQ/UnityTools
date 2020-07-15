//
// AssetsMenuItem.cs
//
// Author:
//       fjy <jiyuan.feng@live.com>
//
// Copyright (c) 2020 fjy
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

using System;
using System.Diagnostics;
using System.IO;
using UnityEditor;
using UnityEngine;
using Debug = UnityEngine.Debug;

namespace libx
{
    public static class MenuItems
    {
        public const string KRuntimeMode = "Assets/AB/Bundles/Enable RuntimeMode";
        private const string KApplyBuildRules = "Assets/AB/Bundles/Build Rules";
        private const string KBuildAssetBundles = "Assets/AB/Bundles/Build Bundles";
        private const string KBuildPlayer = "Assets/AB/Bundles/Build Player";
        private const string KViewDataPath = "Assets/AB/Bundles/View Bundles";
        private const string KCopyBundles = "Assets/AB/Bundles/Copy Bundles";

        [MenuItem("Assets/AB/Apply Rule/Text", false, 1)]
        private static void ApplyRuleText()
        {
            var rules = BuildScript.GetBuildRules();
            AddRulesForSelection(rules, rules.searchPatternText);
        }

        [MenuItem("Assets/AB/Apply Rule/Prefab", false, 1)]
        private static void ApplyRulePrefab()
        {
            var rules = BuildScript.GetBuildRules();
            AddRulesForSelection(rules, rules.searchPatternPrefab);
        }

        [MenuItem("Assets/AB/Apply Rule/Png", false, 1)]
        private static void ApplyRulePng()
        {
            var rules = BuildScript.GetBuildRules();
            AddRulesForSelection(rules, rules.searchPatternPng);
        }

        [MenuItem("Assets/AB/Apply Rule/Material", false, 1)]
        private static void ApplyRuleMaterial()
        {
            var rules = BuildScript.GetBuildRules();
            AddRulesForSelection(rules, rules.searchPatternMaterial);
        }

        [MenuItem("Assets/AB/Apply Rule/Controller", false, 1)]
        private static void ApplyRuleController()
        {
            var rules = BuildScript.GetBuildRules();
            AddRulesForSelection(rules, rules.searchPatternController);
        }

        [MenuItem("Assets/AB/Apply Rule/Asset", false, 1)]
        private static void ApplyRuleAsset()
        {
            var rules = BuildScript.GetBuildRules();
            AddRulesForSelection(rules, rules.searchPatternAsset);
        }

        [MenuItem("Assets/AB/Apply Rule/Scene", false, 1)]
        private static void ApplyRuleScene()
        {
            var rules = BuildScript.GetBuildRules();
            AddRulesForSelection(rules, rules.searchPatternScene);
        }

        [MenuItem("Assets/AB/Apply Rule/Directory", false, 1)]
        private static void ApplyRuleDir()
        {
            var rules = BuildScript.GetBuildRules();
            AddRulesForSelection(rules, rules.searchPatternDir);
        }

        private static void AddRulesForSelection(BuildRules rules, string searchPattern)
        {
            var isDir = rules.searchPatternDir.Equals(searchPattern);
            foreach (var item in Selection.objects)
            {
                var path = AssetDatabase.GetAssetPath(item);
                var rule = new BuildRule
                {
                    searchPath = path,
                    searchPattern = searchPattern,
                    nameBy = isDir ? NameBy.Directory : NameBy.Path
                };
                ArrayUtility.Add(ref rules.rules, rule);
            }

            EditorUtility.SetDirty(rules);
            AssetDatabase.SaveAssets();
        }

        [MenuItem(KApplyBuildRules)]
        private static void ApplyBuildRules()
        {
            var watch = new Stopwatch();
            watch.Start();
            BuildScript.ApplyBuildRules();
            watch.Stop();
            Debug.Log("ApplyBuildRules " + watch.ElapsedMilliseconds + " ms.");
        }

        [MenuItem(KBuildAssetBundles)]
        private static void BuildAssetBundles()
        {
            var watch = new Stopwatch();
            watch.Start();
            BuildScript.ApplyBuildRules();
            BuildScript.BuildAssetBundles();
            watch.Stop();
            Debug.Log("BuildAssetBundles " + watch.ElapsedMilliseconds + " ms.");
        }

        [MenuItem(KBuildPlayer)]
        private static void BuildStandalonePlayer()
        {
            BuildScript.BuildStandalonePlayer();
        }

        [MenuItem(KViewDataPath)]
        private static void ViewDataPath()
        {
            EditorUtility.OpenWithDefaultApp(Application.persistentDataPath);
        }

        [MenuItem(KCopyBundles)]
        private static void CopyAssetBundles()
        {
            BuildScript.CopyAssetBundlesTo(Application.streamingAssetsPath);
        }

        [MenuItem(KRuntimeMode)]
        private static void EnabledRuntimeMode()
        {
            var settings = BuildScript.GetSettings();
            if (!Menu.GetChecked(KRuntimeMode))
            {
                Menu.SetChecked(KRuntimeMode, true);
                settings.runtimeMode = true;
            }
            else
            {
                Menu.SetChecked(KRuntimeMode, false);
                settings.runtimeMode = false;
            }
        }

#if !UNITY_2018_OR_NEWER
        private const string KCopyPath = "Assets/AB/CopyPath";
        [MenuItem(KCopyPath)]
        private static void CopyPath()
        {
            var assetPath = AssetDatabase.GetAssetPath(Selection.activeObject);
            EditorGUIUtility.systemCopyBuffer = assetPath;
            Debug.Log(assetPath);
        }
#endif
        private const string KToJson = "Assets/AB/ToJson";

        [MenuItem(KToJson)]
        private static void ToJson()
        {
            var path = AssetDatabase.GetAssetPath(Selection.activeObject);
            var json = JsonUtility.ToJson(Selection.activeObject);
            File.WriteAllText(path.Replace(".asset", ".json"), json);
            AssetDatabase.Refresh();
        }

        #region Tools 
        [MenuItem("Tools/AB/View CRC")]
        private static void GetCRC()
        {
            var path = EditorUtility.OpenFilePanel("OpenFile", Environment.CurrentDirectory, "");
            if (string.IsNullOrEmpty(path))
            {
                return;
            }

            using (var fs = File.OpenRead(path))
            {
                var crc = Utility.GetCRC32Hash(fs);
                Debug.Log(crc);
            }
        }

        [MenuItem("Tools/AB/View MD5")]
        private static void GetMD5()
        {
            var path = EditorUtility.OpenFilePanel("OpenFile", Environment.CurrentDirectory, "");
            if (string.IsNullOrEmpty(path))
            {
                return;
            }

            using (var fs = File.OpenRead(path))
            {
                var crc = Utility.GetMD5Hash(fs);
                Debug.Log(crc);
            }
        }

        [MenuItem("Tools/AB/Take a Screenshot")]
        private static void Screenshot()
        {
            var path = EditorUtility.SaveFilePanel("截屏", null, "screenshot_", "png");
            if (string.IsNullOrEmpty(path))
            {
                return;
            }

            ScreenCapture.CaptureScreenshot(path);

        }
        #endregion 
    }
}
