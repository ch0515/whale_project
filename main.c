#include "main.h"

int main(void) {
    while (1) {
        init();
        drawTitle();
        if (!menuDraw()) {
            gloop();
        }
        else
            break;
    }

    return 0;
}

void drawTitle() {
    int x = 1;
    int y = 2;
    system("cls");

    setColor(darkgray, black);
    printf("developed by 이혜령 황채민");

     x = 23; 
     y = 4;
    setColor(cyan, black);
    gotoxy(x, y);
    printf("           hh              lll                                              ");
    gotoxy(x, ++y);
    printf("ww      ww hh        aa aa lll   eee      gggggg   aa aa mm mm mmmm    eee  ");
    gotoxy(x, ++y);
    printf("ww      ww hhhhhh   aa aaa lll ee   e    gg   gg  aa aaa mmm  mm  mm ee   e ");
    gotoxy(x, ++y);
    printf(" ww ww ww  hh   hh aa  aaa lll eeeee     ggggggg aa  aaa mmm  mm  mm eeeee  ");
    gotoxy(x, ++y);
    printf("  ww  ww   hh   hh  aaa aa lll  eeeee         gg  aaa aa mmm  mm  mm  eeeee ");
    gotoxy(x, ++y);  
    printf("                                          ggggg                             ");


    setColor(white, black);
    x = 0, y = 12;
    gotoxy(x, y);
    printf("             $$$$$$          O  ---(.______)--||-------||----||------||-------||-----");
    gotoxy(x, ++y);
    printf("          $$$$$$$$$$$$         |                                                     |  O");
    gotoxy(x, ++y);
    printf("$$  $$   $$$$$$$$$$$$$$    。  |     이번 게임은 [내가 고래 였다면] 입니다.          |");
    gotoxy(x, ++y);
    printf(" $$$$$   $$$$$$$$$$$$$$ o      |                                                     | ＊");
    gotoxy(x, ++y);
    printf("  $$$$$$$$$$$$$$$$$$$$         |      고래 그림이 그려진 쪽에 화살표를 멈추세요.     |");
    gotoxy(x, ++y);
    printf("   $$$$$$$$$$$$$$$$$$$     ＊  | 총 3번의 고래 그림에 화살표를 멈추면 고래가 됩니다. |");
    gotoxy(x, ++y);
    printf("                             o |                                                     |");
    gotoxy(x, ++y);
    printf("                       ＊      |          엔터키(ENTER)를 눌러 시작하세요            |");
    gotoxy(x, ++y);
    printf("                               |                                                     |   o");
    gotoxy(x, ++y);
    printf("                                ---||-------||-------||----||------||----(______.)---");

}

int menuDraw() {
    int input;
    int x = 55, y = 26;
    int key = y;
    int num = 1;
    gotoxy(x - 2, y);
    printf("> 시작하기\n");
    gotoxy(x, y + 1);
    printf("종료하기");
    while (1) {
        input = _getch();
        switch (input) {
        case UP: {
            if (y > key) {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, --y);
                printf(">");
            }
            break;
        }
        case DOWN: {
            if (y < key + num) {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, ++y);
                printf(">");
            }
            break;
        }
        case ENTER: {
            return y - key;
        }
        }
    }
    return 0;
}
int keyControl() {
    int input;
    while (1) {
        input = _getch();
        switch (input) {
        case LEFT: {
            return 1;
            break;
        }
        case RIGHT: {
            return 2;
            break;
        }
        case ESC: {
            break;
        }
        }
    }
    return 0;
}
void gloop() {
    int heart = 3;
    int x = 0;
    int y = 7;
    //값 넣어주기
    system("cls");
    // srand(time(NULL));

    while (1) {

        x = 15;
        y = 7;
        setColor(lightcyan, black);
        gotoxy(x, y);
        printf("            @@@@@@     \n");
        gotoxy(x, y++);
        printf("         @@@@@@@@@@@@  \n");
        gotoxy(x, y++);
        printf("        @@@@@@@@@@@@@@ \n");
        gotoxy(x, y++);
        printf("@@ @@   @@@@@@@@@@@ @@\n");
        gotoxy(x, y++);
        printf(" @@@@@@@@@@@@@@@@@@@@@ \n");
        gotoxy(x, y++);
        printf("  @@@@@@@@@@@@@@@@@@@@ \n");

        x = 40;
        y = 6;
        gotoxy(x, y++);
        setColor(brown, black);
        printf("    $$$$      \n");
        gotoxy(x, y++);
        printf("  $$$$$$$$    \n");
        gotoxy(x, y++);
        printf("  $$$$$$$$    \n");
        gotoxy(x, y++);
        printf("    $$$$      \n");
        gotoxy(x, y++);
        printf("  $$$$$$$$   \n");
        gotoxy(x, y++);
        printf(" $$$$$$$$$$  \n");
        gotoxy(x, y++);
        printf("$$$$$$$$$$$$ \n");

        x = 60;
        y = 7;
        setColor(lightcyan, black);
        gotoxy(x, y);
        printf("            ######       \n");
        gotoxy(x, y++);
        printf("         ############    \n");
        gotoxy(x, y++);
        printf("        ##############   \n");
        gotoxy(x, y++);
        printf("## ##   ########### ##   \n");
        gotoxy(x, y++);
        printf(" #####################   \n");
        gotoxy(x, y++);
        printf("  ####################   \n");

        x = 90;
        y = 7;
        gotoxy(x, y++);
        setColor(brown, black);
        printf("    $$$$      \n");
        gotoxy(x, y++);
        printf("  $$$$$$$$    \n");
        gotoxy(x, y++);
        printf("  $$$$$$$$    \n");
        gotoxy(x, y++);
        printf("    $$$$      \n");
        gotoxy(x, y++);
        printf("  $$$$$$$$   \n");
        gotoxy(x, y++);
        printf(" $$$$$$$$$$  \n");
        gotoxy(x, y++);
        printf("$$$$$$$$$$$$ \n");

    }
}