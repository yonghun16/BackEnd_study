#include <stdio.h>

/* count lines in input */
int main() {
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)  // 받는 문자가 끝이 아닐 때까지 반복
        if (c == '\n')              // 개행문자를 받으면
            ++nl;                   // 라인을 카운트
    printf("%d\n", nl);             // 카운트된 라인 출력

    return 0;
}
