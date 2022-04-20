#pragma once
#include<stdio.h>
#include<graphics.h>
#include<mmsystem.h>//包含多媒体设备
#pragma comment(lib,"winmm.lib")//加载静态库
#define WIN_WIDTH 1440    //窗口宽度
#define WIN_HEIGHT 1080   //窗口高度
extern int music;
extern int* music_point;
void MusicMenu();
void synthetic_music(int*);
void background_music(int*);
void close_music();
void turnon_music();
void startmenu();//开始界面
void button(int x, int y, int w, int h, const char* text);