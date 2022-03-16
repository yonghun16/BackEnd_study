#include <stdio.h>

/* count characters in input; 2st version */

int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)    // 입력받는 문자가 끝이 아닐 동안 받고 
       ;                                    // 입력 받는 도중 nc를 카운트함.
    printf("%.0f\n", nc);

    return 0;
}
