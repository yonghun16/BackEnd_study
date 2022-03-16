#include <stdio.h>

/* count characters in input; 1st version */

int main()
{
    long nc;

    nc = 0;

    while (getchar() != EOF)    // 끝이 아닐동안 입력을 받는다.
        ++nc;                   // 입력 받을 때마다 카운트함.
    printf("%ld\n", nc);        // 카운트 된 숫자를 출력

    return 0;
}
