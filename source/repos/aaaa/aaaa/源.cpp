#include<graphics.h>
#include<conio.h>

int main()
{
	const int width = 1440;

	const int height = 1080;
	



	initgraph(width, height);//640是画布宽度，480是画布高度


	setbkmode(TRANSPARENT);//显示透明文字

	settextcolor(WHITE);//设置字体颜色为蓝色

	settextstyle(50, 0, _T("宋体"));//设置字体

	outtextxy(50, 50, _T("龙卷风小组 "));//输出文字
	outtextxy(50,100, _T("本次开发人员："));
	outtextxy(50,150, _T("向蓬辉 卢晓航 彭渝森  许晋明 郭昭琪 陈国钊"));
	
	outtextxy(50, 250, _T("小组其余成员:"));
	outtextxy(50, 300, _T("杜斌 童帆 周已丁 张彩龙 梁清"));

	_getch();//暂停，等待键盘按键

	closegraph();//关闭当前画布

	return 0;
}