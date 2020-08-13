namespace AssetFramework
{
    /// <summary>
    /// 用到的 code 码,再在这个地方添加,并根据这些 code 码做选择
    /// 这个地方用作 HTTP 请求使用
    /// </summary>
    public enum NetCode
    {
        //1xx 服务器已收到. 表示代表请求已被接受,需要继续处理.一般情况下服务器禁止向此类客户端发送 1xx 响应
        
        //2xx 成功.这一类型的状态码，代表请求已成功被服务器接收、理解、并接受。
        Http_Success              = 200,  // OK,成功,后面可以接受数据,对于 CDN 下载来说,我们只需要判断它是不是 200 或者 206 就够了,其他一般不会出现.
        Http_Created = 201,  //创建(CDN 中不会用到)
        Http_Accepted = 202, //已接受请求,但未处理
        Http_Non_Authoritative_Information = 203, //内容(文档)已正常的返回,但一些应答头可能不正确.
        Http_No_Content = 204, //没有内容(文档)
        Http_Reset_Content = 205, //没有新的内容
        Http_Partial_Contend = 206, //部分下载,使用 Range 头的 GET 请求,这个是成功的,HTTP1.1 协议
        
        
        //3xx 重定向. 这类状态码代表需要客户端采取进一步的操作才能完成请求。通常，这些状态码用来重定向，后续的请求地址（重定向目标）在本次响应的 Location 域中指明。
        NetCode_Multiple_Choices = 300,//多个 URL 选择,默认选择第一个
        NetCode_Move_Temporarily = 302, //请求的资源临时从不同的 URI响应请求,大多数情况下不会返回这个,因为在域名解析时就已经做过负载平衡了.
        
        
        //4xx 请求错误. 这类的状态码代表了客户端看起来可能发生了错误，妨碍了服务器的处理。
        NetCode_Bad_Request = 401,//语义有误,当前请求无法被服务器理解.请求参数有误
        NetCode_Unauthorized = 401, //当前请求需要用户验证。
        NetCode_Not_Found = 404, //请求失败，请求所希望得到的资源未被在服务器上发现
        NetCode_Request_Timeout = 408, //请求超时,客户端没有在服务器预备等待的时间内完成一个请求的发送。客户端可以随时再次提交这一请求而无需进行任何更改。
        
        
        //5xx 6xx 服务器错误
        NetCode_Internal_Server_Error = 500, //服务器遇到了一个未曾预料的状况

        //除了上面 HTTP 本身的 Code 码,添加一些错误码
        NetCode_ConnectFailed      = -200, // 不能连接上服务器
        NetCode_No_answer_http     = -300, // 接收回应包失败
        NetCode_No_answer_file_len = -400, // 没有返回长度信息
        NetCode_Receive_break      = -500, // 接收中断
        
    }
}