#pragma warning(disable:4996)
#include <errno.h>

#define MAX_STRING 70
#define MAP_WIDTH 18
#define MAP_HEIGHT 100
#define ONE_SECOND 10

#define AUTH 0

#define ESC 27
#define ENTER 13
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACEBAR 32

void drawTitle();
int menuDraw();
void gloop();
