#include"标头.h"
int music = 1;
int* music_point = &music;
void background_music(int* music_point) {
	if (*music_point == 1) {
		//打开音乐
		mciSendString("close ./BackgroundMusic.mp3", 0, 0, 0);//用于重置音乐
		mciSendString("open ./BackgroundMusic.mp3", 0, 0, 0);
		mciSendString("play ./BackgroundMusic.mp3 repeat", 0, 0, 0);
	}
	if (*music_point == -1) {
		//关闭音乐
		mciSendString("close ./BackgroundMusic.mp3", 0, 0, 0);

	}
}
void synthetic_music(int* music_point) {
	if (*music_point == 1) {
		//打开音乐
		mciSendString("close ./KeyDown.mp3", 0, 0, 0);
		mciSendString("open ./KeyDown.mp3", 0, 0, 0);
		mciSendString("play ./KeyDown.mp3", 0, 0, 0);
	}

	if (*music_point == -1) {
		//关闭音乐
		mciSendString("close ./KeyDown.mp3", 0, 0, 0);
	}
}
void turnon_music() {
	*music_point = 1;
}
void close_music() {
	*music_point = -*music_point;
	synthetic_music(&music);
	background_music(&music);
}