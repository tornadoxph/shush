#include"��ͷ.h"
void button(int x, int y, int w, int h, const char* text)
{
	setbkmode(TRANSPARENT);
	setfillcolor(WHITE);
	setlinecolor(BLACK);
	fillrectangle(x, y, x + w, y + h);

	char text_[20] = "";
	strcpy_s(text_, text);

	int tx = x + (w - textwidth(text)) / 2;
	int ty = y + (h - textheight(text)) / 2;
	outtextxy(tx, ty, text);
}

void startmenu()
{
	initgraph(WIN_WIDTH, WIN_HEIGHT);
	setbkcolor(WHITE);
	cleardevice();

	settextcolor(RED);

	int Bwide = 200, Bhigh = 80;
	int Bx = (WIN_WIDTH - Bwide) / 2;
	button(Bx, 90, Bwide, Bhigh, "��ʼ��Ϸ");
	button(Bx, 250, Bwide, Bhigh, "��Ϸ����");
	button(Bx, 410, Bwide, Bhigh, "����");
	button(Bx, 570, Bwide, Bhigh, "������Ա");
	button(Bx, 730, Bwide, Bhigh, "�˳�");
}