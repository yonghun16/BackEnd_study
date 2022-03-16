#include <stdio.h>

int lower(int c);

int main()
{
    int c;
    while((c = getchar()) != EOF) {
        printf("%c", lower(c));
    }

    return 0;
}

/* lower: convert c to lower case: ASCII only */
int lower(int c)
{
    if( c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';    // 소문자 변환
    else
        return c;
}
