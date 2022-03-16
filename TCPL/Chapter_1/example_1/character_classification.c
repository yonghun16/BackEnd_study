#include <stdio.h>

/* count digits, white space, others */

int main()
{
    int c, i, nwhite, nother;            // c, i, 공백카운트 변수, 기타문자 카운트 변수 
    int ndigit[10];                      // 0 ~ 9 숫자 저장

    nwhite = nother = 0;
    for(i = 0; i < 10; ++i)
        ndigit[i] = 0;                   // 0으로 초기화

    while((c = getchar()) != EOF)
        if(c >= '0' && c<= '9')          // c에 받은 '문자'가 '0' ~ '9' 사이의 문자면
            ++ndigit[c-'0'];             // c에서 '0'에 해당하는 아스키코드 값을 빼준 숫자(곧 사용한 숫자)를 index로 써서 카운트함.
        else if(c == ' ' || c == '\n' || c == '\t')
            ++nwhite;                    // 공백, 개행, 탭을 공백으로 카운트함.
        else
            ++nother;                    // 나머지 경우는 기타문자임으로 기타문자에 카운트함.

    printf("digits =");
    for(i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);        // 사용된 숫자 출력
    printf(", white space = %d, others = %d\n", nwhite, nother);    // 나머지 출력

    return 0;
}
