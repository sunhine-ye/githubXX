#define _CRT_SECURE_NO_WARNINGS 1
#include<graphics.h>
#include<windows.h>

int main(void) {
//初始化图像界面640*480,就是窗口的大小。
	initgraph(640, 480);

	setbkcolor(RGB(64, 128, 128));//设置颜色
	cleardevice();//填充背景

	//设置画笔的颜色
	setlinecolor(RGB(255, 0, 0));
	//设置画笔的样式，PS_SOLID表示实线,10表示线的宽度。
    setlinestyle(PS_SOLID, 10);
	//构建需要的图形-画一个圆,在（320，240）位置画一个圆，半径为200像素
	circle(320, 240, 200);

	settextcolor(RGB(255, 255, 0));//设置字体颜色

	//字体的高度为80，字体宽度。为0.表示不指定宽度，字体的
	settextstyle(80,0, _T("微软雅黑"));

	//在坐标（170，190）的位置打印指定文字
	outtextxy(170, 190, _T("沙雕霜霜儿"));

	//画线，从坐标位置（180，380）到坐标（460，100）位置画一条线。
	line(180, 380, 460, 100);

	system("pause");//暂停
	//关闭图形界面  
	closegraph();  
	return 0;
}