#pragma once
#include<stdio.h>
#include<graphics.h>
#include<mmsystem.h>//������ý���豸
#pragma comment(lib,"winmm.lib")//���ؾ�̬��
#define WIN_WIDTH 1440    //���ڿ��
#define WIN_HEIGHT 1080   //���ڸ߶�
extern int music;
extern int* music_point;
void MusicMenu();
void synthetic_music(int*);
void background_music(int*);
void close_music();
void turnon_music();
void startmenu();//��ʼ����
void button(int x, int y, int w, int h, const char* text);