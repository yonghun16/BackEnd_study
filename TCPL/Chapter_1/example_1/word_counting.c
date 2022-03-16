#include <stdio.h>

#define IN	1   /* inside a word */
#define OUT	0   /* outside a word */

/* count lines, words, and characters in input */
int main() 
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF) {
        ++nc;                                   // 문자 카운트
        if(c == '\n')
            ++nl;                               // 라인 카운트
        if(c == ' ' || c == '\n' || c == '\t')  // 받은 문자가 공백, 개행, 탭이면
            state = OUT;                        // 연속성이 끊남
        else if (state == OUT) {                // 연속성이 끊나면 
            state = IN;                         // 다시 새로운 단어 시작(연속성 in)
            ++nw;                               // 단어 카운트
        }
    }
    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}
