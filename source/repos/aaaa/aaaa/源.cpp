#include<graphics.h>
#include<conio.h>

int main()
{
	const int width = 1440;

	const int height = 1080;
	



	initgraph(width, height);//640�ǻ�����ȣ�480�ǻ����߶�


	setbkmode(TRANSPARENT);//��ʾ͸������

	settextcolor(WHITE);//����������ɫΪ��ɫ

	settextstyle(50, 0, _T("����"));//��������

	outtextxy(50, 50, _T("�����С�� "));//�������
	outtextxy(50,100, _T("���ο�����Ա��"));
	outtextxy(50,150, _T("����� ¬���� ����ɭ  ����� ������ �¹���"));
	
	outtextxy(50, 250, _T("С�������Ա:"));
	outtextxy(50, 300, _T("�ű� ͯ�� ���Ѷ� �Ų��� ����"));

	_getch();//��ͣ���ȴ����̰���

	closegraph();//�رյ�ǰ����

	return 0;
}