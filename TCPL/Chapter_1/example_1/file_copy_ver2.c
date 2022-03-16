#include <stdio.h>

/* copy input to output; 2st version */
int main()
{
    int c;
    
    while ((c = getchar()) != EOF) {    // c로 입력받은 값이 EOF가 아니라면 반복
        putchar(c);                     // c 출력
    }

    return 0;
}
