#include <stdio.h>
#include <stdlib.h>

void showLoginBar();
void showMenu();
void loginEnter();
void passwdChangeEnter();
void gameExit();

void login()
{
    char id[10];
    char menuNumber[10];

    showLoginBar();
    
    while(1) {
        showMenu();
        scanf("%s", menuNumber); 

        if(menuNumber[1]) {
            menuNumber[0] = 0;
        }

        if((int)menuNumber[0]-48 == 1) {        // 로그인
            loginEnter();
            break;
        }
        else if((int)menuNumber[0]-48 == 2) {   // 패스워드 변경
            passwdChangeEnter();
            break;
        }
        else if((int)menuNumber[0]-48 == 3) {  // 종료
            gameExit();
            break;
        }
        else {
            printf("\n*** 잘못 누르셨습니다. 다시 입력해 주세요. ***\n");
            continue;
        }
    }

    showLoginBar();

}

void showLoginBar()
{
    printf("\n──────────────────────────────────────────────────────────────────────────────────────────────\n");
}

void showMenu()
{
    printf("\n");
    printf("1. 로그인\n");
    printf("2. 패스워드 변경\n");
    printf("3. 종료\n");
    printf("메뉴 번호를 입력하세요 : ");
}

void loginEnter() {
    printf("\n로그인 화면\n");
}

void passwdChangeEnter()
{
    printf("\n패스워드 변경 화면\n");
}

void gameExit()
{
    printf("\n게임 종료\n");
}
