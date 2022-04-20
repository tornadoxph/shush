#include"标头.h"
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
	button(Bx, 90, Bwide, Bhigh, "开始游戏");
	button(Bx, 250, Bwide, Bhigh, "游戏规则");
	button(Bx, 410, Bwide, Bhigh, "音量");
	button(Bx, 570, Bwide, Bhigh, "制作人员");
	button(Bx, 730, Bwide, Bhigh, "退出");
}