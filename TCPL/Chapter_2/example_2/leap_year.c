#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)  // 산술연산자가 관계연산자 보다 우선순위로 계산 
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;
}
