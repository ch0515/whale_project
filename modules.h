//modules.h
#define _CRT_SECURE_NO_WARN
#pragma once
#include<stdio.h>
#include <Windows.h>
#include <conio.h>
#include <mmsystem.h>
#include <string.h>
#include <time.h>
#pragma comment(lib, "winmm.lib")



#ifndef __COLOR_LIST_
#define __COLOR_LIST_

enum {
	black,
	blue,
	green,
	cyan,
	red,
	purple,
	brown,
	lightgray,
	darkgray,
	lightblue,
	lightgreen,
	lightcyan,
	lightred,
	lightpurple,
	yellow,
	white
};

#endif

void init();
void gotoxy(int x, int y);
int menuDraw();
void CursorView();
void setBackColor(int forground, int background);
void setColor(int color);
int keyControl();
void gameOver();
void gameClear();
