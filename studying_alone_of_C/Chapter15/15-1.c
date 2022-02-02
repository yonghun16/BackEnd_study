/* 포인터와 이중 포인터의 관계 */

#include <stdio.h>

int main(void)
{
    int a = 10;     // int형 변수의 선언과 초기화
    int *pi;        // 포인터 선언
    int **ppi;      // 이중 포인터 선언

    pi = &a;        // int형 변수의 주소를 저장한 포인터
    ppi = &pi;      // '포인터의 주소'를 저장한 '이중 포인터'
                    // 포인터도 '변수'이기에 주소를 가지고 있고, 
                    // 그 주소도 '이중 포인터'에 저장 가능

    printf("------------------------------------------------------------\n");
    printf("변수        변숫값         &연산        *연산         **연산\n");
    printf("------------------------------------------------------------\n");
    printf("  a%14d%14u\n", a, &a);
    printf(" pi%14d%14u%14d\n", pi, &pi, *pi);
    printf("ppi%14d%14u%14d%14u\n", ppi, &ppi, *ppi, **ppi);
    printf("------------------------------------------------------------\n");

    return 0;
}