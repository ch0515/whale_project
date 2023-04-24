//main.c
#include "main.h"
#include "modules.h"

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
    printf("          $$$$$$$$$$$         |                                                     |  O");
    gotoxy(x, ++y);
    printf("$$  $$   $$$$$$$$$$$$$    。  |     이번 게임은 [내가 고래 였다면] 입니다.          |");
    gotoxy(x, ++y);
    printf(" $$$$$   $$$$$$$$$$$$$ o      |                                                     | ＊");
    gotoxy(x, ++y);
    printf("  $$$$$$$$$$$$$$$$$$$$        |      고래 그림이 그려진 쪽에 화살표를 멈추세요.     |");
    gotoxy(x, ++y);
    printf("   $$$$$$$$$$$$$$$$$$$     ＊ | 총 3번의 고래 그림에 화살표를 멈추면 고래가 됩니다. |");
    gotoxy(x, ++y);
    printf("                             o|                                                     |");
    gotoxy(x, ++y);
    printf("                       ＊     |          엔터키(ENTER)를 눌러 시작하세요            |");
    gotoxy(x, ++y);
    printf("                              |                                                     |   o");
    gotoxy(x, ++y);
    printf("                              ---||-------||-------||----||------||----(______.)---");

}
void gloop() {
    int life = 0;
    int x = 0;
    int y = 7;
    int a=0;
    int Nos = 0;
    int count = 3;
    //값 넣어주기
    // srand(time(NULL));
    //for (int i = 1; i <= 3; i++) {
    while (1) {
            while (1) {
                x = 15;
                y = 8;
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

                x = 40;
                y = 8;
                gotoxy(x, y++);
                setColor(darkgray, black);
                printf("    ####      \n");
                gotoxy(x, y++);
                printf("  ########    \n");
                gotoxy(x, y++);
                printf("  ########    \n");
                gotoxy(x, y++);
                printf("    ####      \n");
                gotoxy(x, y++);
                printf("  ########   \n");
                gotoxy(x, y++);
                printf(" ##########  \n");
                gotoxy(x, y++);
                printf("############ \n");

                x = 60;
                y = 8;
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
                y = 8;
                gotoxy(x, y++);
                setColor(darkgray, black);
                printf("    ####      \n");
                gotoxy(x, y++);
                printf("  ########    \n");
                gotoxy(x, y++);
                printf("  ########    \n");
                gotoxy(x, y++);
                printf("    ####      \n");
                gotoxy(x, y++);
                printf("  ########   \n");
                gotoxy(x, y++);
                printf(" ##########  \n");
                gotoxy(x, y++);
                printf("############ \n");
                for (int i = 10; i <= 110; i++) {
                    x = i;
                    y = 20;
                    gotoxy(x, y);
                    Sleep(ONE_SECOND);
                    setColor(lightgray, black);
                    printf("▲");
                    system("cls");

                }
                
                a = keyControl();
                break;

            }
            
            
        }

    if (a == 1) {
        if (x == 15) {
            x = 45;
            y = 3;
            gotoxy(x, y);
            setColor(blue, black);
            printf("성공");
            life++;
        }
        else {
            x = 45;
            y = 3;
            gotoxy(x, y);
            setColor(red, black);
            printf("실패");
            Nos++;
        }
    }
        if (life == 3) {
            gameClear();
        }
        if (Nos == 3) {
            gameOver();
        }
    }
 

void gameOver()
{
    system("cls");
    int x = 35, y = 4;

    setColor(lightred);
    gotoxy(x, y++); printf("   _____          __  __ ______    ______      ________ _____ ");
    gotoxy(x, y++); printf("  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\");
    gotoxy(x, y++); printf(" | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |");
    gotoxy(x, y++); printf(" | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  /");
    gotoxy(x, y++); printf(" | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\");
    gotoxy(x, y++); printf("  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\");


}
void gameClear()
{
    int input;
    system("cls");
    int x = 35, y = 4;

    setColor(lightgreen);
    gotoxy(x, y++); printf("   _____                         _____ _    ");
    gotoxy(x, y++); printf("  / ____|                       / ____| | ");
    gotoxy(x, y++); printf(" | |  __  __ _ _ __ ___   ___  | |    | | ___  __ _ _ __");
    gotoxy(x, y++); printf(" | | |_ |/ _` | '_ ` _ \\ / _ \\ | |    | |/ _ \\/ _` | '__|");
    gotoxy(x, y++); printf(" | |__| | (_| | | | | | |  __/ | |____| |  __/ (_| | |   ");
    gotoxy(x, y++); printf("  \\_____|\\__,_|_| |_| |_|\\___|  \\_____|_|\\___|\\__,_|_|");
}