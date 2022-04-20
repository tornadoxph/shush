//界面
/*#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<Windows.h>
#include<cmath>
using namespace std;
int button[5][4] = { { 576,78,864,156 }, {576,234,864,312 },{ 576,390,864,468 },{ 576,546,864,624 },{576,702,864,780} };
int button_judge(int x, int y)
{
	if (x > button[0][0] && x<button[0][2] && y>button[0][1] && y < button[0][3])return 1;
	if (x > button[1][0] && x<button[1][2] && y>button[1][1] && y < button[1][3])return 2;
	if (x > button[2][0] && x<button[2][2] && y>button[2][1] && y < button[2][3])return 3;
	if (x > button[3][0] && x<button[3][2] && y>button[3][1] && y < button[3][3])return 4;
	if (x > button[4][0] && x<button[4][2] && y>button[4][1] && y < button[4][3])return 5;
}
int start_button[] = { 576,78,864,156 };
int rule_button[] = { 576,234,864,312 };
int volume_button[] = { 576,390,864,468 };
int participant_button[] = { 576,546,864,624 };
int exit_button[] = { 576,702,864,780 };
int time1_button[] = { 576,78,864,156 };
int time2_button[] = { 676,78,976,156 };
int game()
{
	initgraph(1440, 768);
	IMAGE background;
	loadimage(&background, "background.bmp");
	putimage(0, 0, &background);
	getchar();
	int i = 0;
	for (i = 0; i < 255; i += 5)
	{
		setbkcolor(RGB(i, i, i));
		cleardevice();
		Sleep(15);
	}
	RECT Time1_button = { time1_button[0],time1_button[1],time1_button[2],time1_button[3] };
	RECT Time2_button = { time2_button[0],time2_button[1],time2_button[2],time2_button[3] };
	LOGFONT f;
	gettextstyle(&f);
	f.lfFaceName, _T("宋体");
	f.lfQuality = ANTIALIASED_QUALITY;
	f.lfHeight = 48;
	f.lfWidth = 48;
	settextstyle(&f);
	settextcolor(BLACK);
	for (int i = 57; i >= 48; i--)
	{
		drawtext(i, &Time1_button, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
		Sleep(1000);
		for (int p = 57; i >= 48; i--)
		{
			drawtext(i, &Time2_button, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
			Sleep(1000);
		}
	}

	system("pause");
	closegraph();
	return 0;
}
int main()
{
	int i = 0, event = 0;
	int win_width = 1440, win_height = 1080;
	initgraph(win_width, win_height);
	IMAGE background;
	loadimage(&background, "background.bmp");
	putimage(0, 0, &background);
	for (int i = 0; i < 256; i += 5)
	{
		setbkcolor(RGB(i, i, i));
		cleardevice();
		Sleep(15);
	}
	RECT Start_button = { start_button[0],start_button[1],start_button[2],start_button[3] };
	RECT Rule_button = { rule_button[0],rule_button[1],rule_button[2],rule_button[3] };
	RECT Volume_button = { volume_button[0],volume_button[1],volume_button[2],volume_button[3] };
	RECT Participant_button = { participant_button[0],participant_button[1],participant_button[2],participant_button[3] };
	RECT Exit_button = { exit_button[0],exit_button[1],exit_button[2],exit_button[3] };
	LOGFONT f;
	gettextstyle(&f);
	f.lfFaceName, _T("宋体");
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	settextcolor(RED);
	drawtext("开始游戏", &Start_button, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext("游戏规则", &Rule_button, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext("音量", &Volume_button, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext("制作人员", &Participant_button, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext("退出", &Exit_button, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	setlinecolor(BLACK);
	rectangle(start_button[0], start_button[1], start_button[2], start_button[3]);
	rectangle(rule_button[0], rule_button[1], rule_button[2], rule_button[3]);
	rectangle(volume_button[0], volume_button[1], volume_button[2], volume_button[3]);
	rectangle(participant_button[0], participant_button[1], participant_button[2], participant_button[3]);
	rectangle(exit_button[0], exit_button[1], exit_button[2], exit_button[3]);
	MOUSEMSG m;
	while (true)
	{
		m = GetMouseMsg();
		switch (m.uMsg)
		{
		case WM_MOUSEMOVE:
			setrop2(R2_NOTXORPEN);
			setlinecolor(LIGHTBLUE);
			setlinestyle(PS_SOLID, 3);
			setfillcolor(WHITE);
			if (button_judge(m.x, m.y != 0))
			{
				if (event != button_judge(m.x, m.y))
				{
					event = button_judge(m.x, m.y);
					fillrectangle(button[event - 1][0], button[event - 1][1], button[event - 1][2], button[event - 1][3]);
				}
				else
				{
					if (event != 0)
					{
						fillrectangle(button[event - 1][0], button[event - 1][1], button[event - 1][2], button[event - 1][3]);
						event = 0;

					}
				}
			}
			break;
		case WM_LBUTTONDOWN:
			setrop2(R2_NOTXORPEN);
			for (i = 0; i <= 10; i++)
			{
				setlinecolor(RGB(25 * i, 25 * i, 25 * i));
				circle(m.x, m.y, i);
				Sleep(10);
				circle(m.x, m.y, i);
			}
			switch (button_judge(m.x, m.y))
			{
			case 1:
				game();
				FlushMouseMsgBuffer();
			default:
				FlushMouseMsgBuffer();
			}
			break;
			FlushMouseMsgBuffer();
		}
	}
	system("pause");
	closegraph();
	return 0;
}*/
//角色移动
#include<stdio.h>			//用于标准输入输出
#include<graphics.h>		//用于图形的函数库
#include<conio.h>			//控制台输入输出
#include<mmsystem.h>		//包含多媒体接口
#pragma comment(lib,"winmm.lib")

IMAGE background, role, roleY,role1,role2;
int x = 100;
int y = 500;
int z = 800;
int w = 500;
int imageNum = 0;			//为照片计数，从0开始
void keyDonw1()
{
	char choice = _getch();
	switch (choice)
	{
	case 'w':
	case 'W':
		putimage(0, 0, &background);
		putimage(x, y, 93, 100, &roleY, imageNum * 93, 300, SRCAND);
		putimage(x, y, 93, 100, &role, imageNum * 93, 300, SRCPAINT);
		imageNum++;
		y -= 5;
		if (imageNum == 4)
			imageNum = 0;
		break;
	case 's':
	case 'S':
		putimage(0, 0, &background);
		putimage(x, y, 93, 100, &roleY, 93 * imageNum, 0, SRCAND);
		putimage(x, y, 93, 100, &role, 93 * imageNum, 0, SRCPAINT);
		imageNum++;
		y += 5;
		if (imageNum == 4)
			imageNum = 0;
		break;
	case 'a':
	case 'A':
		putimage(0, 0, &background);
		putimage(x, y, 93, 100, &roleY, 93 * imageNum, 100, SRCAND);
		putimage(x, y, 93, 100, &role, 93 * imageNum, 100, SRCPAINT);
		imageNum++;
		x -= 5;
		if (imageNum == 4)
			imageNum = 0;
		break;
	case 'd':
	case 'D':
		putimage(0, 0, &background);
		putimage(x, y, 93, 100, &roleY, 93 * imageNum, 200, SRCAND);
		putimage(x, y, 93, 100, &role, 93 * imageNum, 200, SRCPAINT);
		imageNum++;
		x += 5;
		if (imageNum == 4)
			imageNum = 0;
		break;
	case 72:
		putimage(0, 0, &background);
		putimage(z, w, 93, 100, &role2, imageNum * 93, 300, SRCAND);
		putimage(z, w, 93, 100, &role1, imageNum * 93, 300, SRCPAINT);
		imageNum++;
		w -= 5;
		if (imageNum == 4)
			imageNum = 0;
		break;
	case 80:
		putimage(0, 0, &background);
		putimage(z, w, 93, 100, &role2, 93 * imageNum, 0, SRCAND);
		putimage(z, w, 93, 100, &role1, 93 * imageNum, 0, SRCPAINT);
		imageNum++;
		w += 5;
		if (imageNum == 4)
			imageNum = 0;
		break;
	case 75:
		putimage(0, 0, &background);
		putimage(z, w, 93, 100, &role2, 93 * imageNum, 100, SRCAND);
		putimage(z, w, 93, 100, &role1, 93 * imageNum, 100, SRCPAINT);
		imageNum++;
		z -= 5;
		if (imageNum == 4)
			imageNum = 0;
		break;
	case 77:
		putimage(0, 0, &background);
		putimage(z, w, 93, 100, &role2, 93 * imageNum, 200, SRCAND);
		putimage(z, w, 93, 100, &role1, 93 * imageNum, 200, SRCPAINT);
		imageNum++;
		z += 5;
		if (imageNum == 4)
			imageNum = 0;
		break;
	}
}
int main()
{
	initgraph(1440, 768);
	loadimage(&background, "background.bmp");
	putimage(0, 0, &background);
	loadimage(&role, "role.bmp");
	loadimage(&roleY, "roleY.bmp");
	role1 = role;
	role2 = roleY;
	putimage(x, y, 93, 100, &roleY, 0, 200, SRCAND);
	putimage(x, y, 93, 100, &role, 0, 200, SRCPAINT);
	putimage(z, w, 93, 100, &role1, 0, 200, SRCAND);
	putimage(z, w, 93, 100, &role2, 0, 200, SRCPAINT);
	while (true)
	{
		keyDonw1();
		if (_getch() == 13)break;
	}
	closegraph();
	return 0;
}

