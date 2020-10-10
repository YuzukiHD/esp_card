#include "main.h"

String index() {
    return header(TITLE) + "<div><p>是只算法狗+前端+机器学习+后端+系统开发+嵌入式+医学+药理学+摄影的综合垃圾体</p>" 
           "<h2>主要做</h2><h3>机器学习方向：</h3><ul><li>歌声合成，歌声转换，语音合成，自然语言处理，情感处理，人脸识别，图像识别。" 
           "</li></ul><h3>算法方向</h3><ul><li>数字信号处理，音频分析，计算机音频，计算机视觉。</li></ul><h3>前端方向</h3><ul>" 
           "<li>网页，网站，Electron APP，QingShanASD。</li></ul><h3>系统开发</h3><ul><li>Arm版本系统开发，Linux开发，Linux" 
           "与嵌入式，安卓系统基础开发，ChromiumOS基础。</li></ul><h3>后端</h3><ul><li>网站，服务器，运维。</li></ul><h3>嵌入式"
           "</h3><ul><li>树莓派系列，OrangePI系列，FireFly系列，Jetson系列，Arduino系列，51系列，FPGA</li></ul><h>医学方向</h" 
           "3><ul><li>心理学，精神医学，神经外科。</li></ul>" + footer();
}

String footer() {
    return "</div><div class=q><a>GloomyGhost.com &#169; All rights reserved.</a></div>";
}

String header(String t) {
    String a = "YuzukiTsuru";
    String CSS = "article { background: #f2f2f2; padding: 1.3em; }"
                 "body { color: #333; font-family: Century Gothic, sans-serif; font-size: 18px; line-height: 24px; margin: 0; padding: 0; }"
                 "div { padding: 0.5em; }"
                 "h1 { margin: 0.5em 0 0 0; padding: 0.5em; }"
                 "input { width: 100%; padding: 9px 10px; margin: 8px 0; box-sizing: border-box; border-radius: 0; border: 1px solid #555555; border-radius: 10px; }"
                 "label { color: #333; display: block; font-style: italic; font-weight: bold; }"
                 "nav { background: #0066ff; color: #fff; display: block; font-size: 1.3em; padding: 1em; }"
                 "nav b { display: block; font-size: 1.5em; margin-bottom: 0.5em; } "
                 "textarea { width: 100%; }";
    String h = "<!DOCTYPE html><html>"
               "<head><title>" +
               a + " :: " + t + "</title>"
                                "<meta name=viewport content=\"width=device-width,initial-scale=1\">"
                                "<style>" +
               CSS + "</style>"
                     "<meta charset=\"UTF-8\"></head>"
                     "<body><nav><b>" +
               a + "</b> " + SUBTITLE + "</nav><div><h1>" + t + "</h1></div><div>";
    return h;
}
