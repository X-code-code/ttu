#include<stdio.h>
#include<easyx.h>
#include<Mmsystem.h>
#pragma comment(lib,"Winmm.lib")


int main() {
    initgraph(600, 400); // ��ʼ����ͼ���ڴ�СΪ 600x400 ����
    settextcolor(RGB(255, 149, 240));
    settextstyle(72, 0, "�����п�");//������ʽ�������С�������ϸ��"������ʽ"��
    outtextxy(50, 50, "����ţ��");//������֣�x���꣬y���꣬"Ҫ���������"��
    mciSendString("open �ٱ�ƾ�.mp3", 0, 0, 0);//�����֣���open ��������.��׺����0��0��0��
    mciSendString("play �ٱ�ƾ�.mp3", 0, 0, 0);//�������֣���play ��������.��׺����0��0��0��
    //����ͼƬ
    IMAGE bkimg;
    loadimage(&bkimg,"��.jpg");
    //���ͼƬ
    putimage(0, 0, &bkimg);








    getchar();            // �ȴ������¼�
    closegraph();         // �ر�ͼ��ģʽ
}