#include "modules.h"

#define ESC 27
#define ENTER 13
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACEBAR 32



void init() {
	system("mode con cols=120 lines=30 | title Whale game");

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //�ܼ� �ڵ� ��������
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}
//Ŀ�� �����
void CursorView()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}


// move the cursor funtion (chohadam 21-03-11)
void gotoxy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void gotoxy_2x(int x, int y)
{
	COORD Pos;
	Pos.X = x * 2;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

// �ؽ�Ʈ ����
void setColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


void setBackColor(int forground, int background) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);	//�ܼ� �ڵ� ��������
	int code = forground + background * 16;
	SetConsoleTextAttribute(consoleHandle, code);
}

	int input;
    int x = 55, y = 26;
	int key = y;
	while (1) {
		input = _getch();
		switch (input) {
		case UP: {
			if (y > key) {
				gotoxy(x - 2, y);
				gotoxy(x - 2, --y);
			}
			break;
		}
		case DOWN: {
			if (y < key + num) {
				gotoxy(x - 2, y);
				gotoxy(x - 2, ++y);
			}
			break;
		}
		case ENTER: {
			return y - key;
		}
		}
    return 0;
		}
/*#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#ifndef KEY_CODE
#define KEY_CODE
#define ONE_SECOND 10



void init();
void gotoxy(int, int);
void setColor(int, int);


void drawTitle();
int menuDraw();
int keyControl();
void gloop();

//Ű���� ��
#define ESC 27
#define ENTER 13
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACEBAR 32

#endif

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

void init() {
	system("mode con cols=120 lines=30 | title Whale game");

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //�ܼ� �ڵ� ��������
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
	}
}


void setColor(int forground, int background) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //�ܼ� �ڵ� ��������
	int code = forground + background * 16;
	SetConsoleTextAttribute(consoleHandle, code);
}*/