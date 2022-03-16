#include <stdio.h>

/* copy input to output; 1st version */
int main()
{
    int c;

    c = getchar();          // 우선 c에 입력을 받고
    while (c != EOF) {      // c가 파일의 끝이 아니면(Ctrl+d은 종료) 반복
        putchar(c);         // c를 화면에 출력 한 후
        c = getchar();      // 다시 c를 입력 받음
    }

    return 0;
}
