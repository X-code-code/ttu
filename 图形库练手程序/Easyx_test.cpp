#include<stdio.h>
#include<easyx.h>
#include<Mmsystem.h>
#pragma comment(lib,"Winmm.lib")


int main() {
    initgraph(600, 400); // 初始化绘图窗口大小为 600x400 像素
    settextcolor(RGB(255, 149, 240));
    settextstyle(72, 0, "华文行楷");//文字样式（字体大小，字体粗细，"字体样式"）
    outtextxy(50, 50, "我最牛逼");//输出文字（x坐标，y坐标，"要输出的文字"）
    mciSendString("open 百变酒精.mp3", 0, 0, 0);//打开音乐（（open 音乐名字.后缀），0，0，0）
    mciSendString("play 百变酒精.mp3", 0, 0, 0);//播放音乐（（play 音乐名字.后缀），0，0，0）
    //导入图片
    IMAGE bkimg;
    loadimage(&bkimg,"狗.jpg");
    //输出图片
    putimage(0, 0, &bkimg);








    getchar();            // 等待按键事件
    closegraph();         // 关闭图形模式
}