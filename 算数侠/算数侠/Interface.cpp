#include"��ͷ.h"
void MusicMenu() {
	initgraph(WIN_WIDTH,WIN_HEIGHT, SHOWCONSOLE);
	char BKmode[4][4] = { "��","��" };
	settextstyle(100, 0, "���ķ���", 0, 0, 0, 0, 0, 0, 0, 0, 0, ANTIALIASED_QUALITY, 0);//�����
	char title[] = "��������";
	int wide = 360 - textwidth(title) / 2;
	int height = 100 - textheight(title) / 2;
	outtextxy(360+wide,200+height,title);
	setfillcolor(RGB(187, 173, 160));
	int wide1 = 150 - textwidth(BKmode[0]) / 2;
	int height1 = 50-textheight(BKmode[0]) / 2;
	settextcolor(RGB(249, 246, 242));
	setbkmode(1);//�����ֱ���͸��
	solidroundrect(360, 500, 660, 600, 10, 10);
	outtextxy(360 + wide1, 500 + height1, BKmode[0]);//���ж���
	solidroundrect(780, 500, 1080, 600, 10, 10);
	outtextxy(780 + wide1, 500 + height1, BKmode[1]);//���ж���

	getchar();
}