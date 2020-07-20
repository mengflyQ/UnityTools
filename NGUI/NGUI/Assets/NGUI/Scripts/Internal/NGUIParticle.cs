namespace NGUI
{
    using UnityEngine;
    using UnityEngine.ParticleSystemJobs;
    using System.Collections;

    [ExecuteInEditMode]
    [RequireComponent(typeof(ParticleSystemRenderer))]
    public class NGUIParticle : MonoBehaviour
    {
        private Material dyMaterial;
        private NGUIPanel panel;
        private ParticleSystemRenderer pRenderer;
        // private NGUIWidget cover;


        // Use this for initialization
        void Start()
        {
            panel = this.GetComponentInParent<NGUIPanel>();
            pRenderer = this.GetComponent<ParticleSystemRenderer>();

            dyMaterial = new Material(shader: Shader.Find("Hidden/Unlit/Transparent Colored 1"))
            //dyMaterial = new Material(shader:Shader.Find("Hidden/Unlit/Transparent Colored"))
            {
                renderQueue = 4000,
                mainTexture = pRenderer.sharedMaterial.mainTexture
            };
            pRenderer.material = dyMaterial;
            //Debug.Log(dyMaterial.ToString());
            //这个地方不这么写,主要是因为pRenderer.material不能明确是 unity 引擎修改过的material 还是使用的 shareMaterial,还是使用的原始的material
            //pRenderer.material.renderQueue = 4000;            

        }

        /// <summary>
        /// Update is called once per frame
        /// 在这个地方做裁剪,裁剪范围就是当前的父 panel 的范围
        /// 简单粗暴的做法,需要在静态情况下优化代码
        /// 如果不想要裁剪,把下面的代码注释
        /// </summary>
        void OnWillRenderObject()
        {
            if (panel != null && !panel.hasClipping) return;

            // if (cover != null && cover.isActiveAndEnabled && cover.drawCall != null)
            // {
            //     dyMaterial.renderQueue = cover.drawCall.renderQueue;
            // }


            Vector4 cr = panel.drawCallClipRange;
            Vector2 soft = panel.clipSoftness;

            Vector2 sharpness = new Vector2(1000.0f, 1000.0f);
            if (soft.x > 0f) sharpness.x = cr.z / soft.x;
            if (soft.y > 0f) sharpness.y = cr.w / soft.y;
            float scale = 1.0f / transform.lossyScale.x;
            Vector3 position = -panel.transform.position * scale;

            dyMaterial.SetVector(Shader.PropertyToID("_ClipRange0"), new Vector4(-cr.x / cr.z + position.x / cr.z, -cr.y / cr.w + position.y / cr.w, 1.0f / cr.z * scale, 1.0f / cr.w * scale));
            dyMaterial.SetVector(Shader.PropertyToID("_ClipArgs0"), new Vector4(sharpness.x, sharpness.y, 0, 1));
        }


        void OnDestroy()
        {
            DestroyImmediate(dyMaterial);
            dyMaterial = null;
        }

    }
}


