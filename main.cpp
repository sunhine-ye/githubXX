#define _CRT_SECURE_NO_WARNINGS 1
#include<graphics.h>
#include<windows.h>

int main(void) {
//��ʼ��ͼ�����640*480,���Ǵ��ڵĴ�С��
	initgraph(640, 480);

	setbkcolor(RGB(64, 128, 128));//������ɫ
	cleardevice();//��䱳��

	//���û��ʵ���ɫ
	setlinecolor(RGB(255, 0, 0));
	//���û��ʵ���ʽ��PS_SOLID��ʾʵ��,10��ʾ�ߵĿ�ȡ�
    setlinestyle(PS_SOLID, 10);
	//������Ҫ��ͼ��-��һ��Բ,�ڣ�320��240��λ�û�һ��Բ���뾶Ϊ200����
	circle(320, 240, 200);

	settextcolor(RGB(255, 255, 0));//����������ɫ

	//����ĸ߶�Ϊ80�������ȡ�Ϊ0.��ʾ��ָ����ȣ������
	settextstyle(80,0, _T("΢���ź�"));

	//�����꣨170��190����λ�ô�ӡָ������
	outtextxy(170, 190, _T("ɳ��˪˪��"));

	//���ߣ�������λ�ã�180��380�������꣨460��100��λ�û�һ���ߡ�
	line(180, 380, 460, 100);

	system("pause");//��ͣ
	//�ر�ͼ�ν���  
	closegraph();  
	return 0;
}