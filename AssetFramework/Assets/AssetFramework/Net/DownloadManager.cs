using System.Collections;
using System.Collections.Generic;
using GameBasicsLibrary;
using UnityEngine;

namespace AssetFramework
{
    /// <summary>
    /// 多线程下载策略?
    /// 下载和本地保存用线程区别开来
    /// 下载使用一个或多个线程，本地保存使用一个线程
    /// 之所以保存文件单独使用一个线程，而不是在下载线程完成后保存文件，一方面是为了避免 保存时的网络空闲，另一方面也是为了减少文件写入错误，避免文件写入加锁。
    /// 在同一个下载线程，从开头到结尾，按顺序下载。这样逻辑简单，也方便保存进度， 只需要保存当前下载量(下载量也就是下次分片下载的起始位置)。
    /// 而著名的 Neat Download Manager 下载软件: 就是将一个文件分片,开启多线程同时下载不同位置的一个分片,这样做逻辑复杂,下载速度也更快
    /// 如何限速与控制资源下载的开销?
    /// 使用单个下载线程,使用多个下载线程会增加 CPU 的开销;多个下载线程就需要记录多个文件的下载状态,用于重启后的继续下载.
    /// 限速:定额下载是通过Range:bytes这个字段，每次请求文件下载时，并不请求整个文件，而是每次只 请求一部分，分片下载，这样就能很容易地控制下载速度，也就能控制Socket层接收的内存开销。
    /// 定额接收就是在Socket收包时，并不一次性分配一个超大的内存块，而是只分配一个固定的内存 (比如:4KB或300KB)。当这块数据接收完成了，提交到写线程写入到文件，并不是等整个文 件完整接收完后再写入。写入完成后，再将这个内存块放到内存池重复利用，由于这是一个循环 的过程，实际上并不会产生大量的堆积，除非是下载太快，写入太慢。，可以实现用很少量的内存来 达到接收大文件的目的
    /// 如何加速下载?
    /// 1. 选择好的 CDN 厂商,使用 CDN 加速
    /// 2. 使用多线程下载,向著名的 Neat Download Manager 下载软件学习.一般是 4-5 个即可
    /// 3. 减少下载的文件数量,特别减少小文件的数量.
    /// 4. 对于分片下载的文件，合理控制分片的大小，也可以加快下载的速度，这个需要在自己项目中 去测试。
    /// </summary>
    public class DownloadManager : Singleton<HotUpdateManager>, IManager
    {
        public void Awake()
        {

        }

        public void Start()
        {
            throw new System.NotImplementedException();
        }

        public void Update()
        {
            throw new System.NotImplementedException();
        }

        public void LateUpdate()
        {
            throw new System.NotImplementedException();
        }

        public void OnDestroy()
        {
            throw new System.NotImplementedException();
        }
    }
}