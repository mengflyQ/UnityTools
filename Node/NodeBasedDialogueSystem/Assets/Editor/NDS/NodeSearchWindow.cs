using System.Collections.Generic;
using NodeDialogueSystemEditor;
using UnityEditor;
using UnityEditor.Experimental.GraphView;
using UnityEngine;

namespace NDSEditor
{
    public class NodeSearchWindow : ScriptableObject , ISearchWindowProvider
    {
        private DialogueGraph _window;
        private DialogueGraphView _graphView;
        
        public void Configure(DialogueGraph window, DialogueGraphView graphView)
        {
            _window    = window;
            _graphView = graphView;
        }

        #region Interface Method
        
        public List<SearchTreeEntry> CreateSearchTree(SearchWindowContext context)
        {
            var ste = new List<SearchTreeEntry>()
                      {
                          new SearchTreeGroupEntry(new GUIContent("All Node"), 0),
                          new SearchTreeGroupEntry(new GUIContent("Dialogue Node"), 1),
                          new SearchTreeEntry(new GUIContent("DialogueNode"))
                          {
                              level = 2, userData = new DialogueNode()
                          },
                          new SearchTreeEntry(new GUIContent("Group"))
                          {
                              level = 2, userData = new Group()
                          }
                      };
            return ste;
        }

        public bool OnSelectEntry(SearchTreeEntry SearchTreeEntry, SearchWindowContext context)
        {
            switch (SearchTreeEntry.userData)
            {
                case DialogueNode dialogueNode:
                    _graphView.CreateAndAdd("Dialogue Node");
                    return true;
                default:
                    return false;
            }
        }
        

        #endregion

    }
}