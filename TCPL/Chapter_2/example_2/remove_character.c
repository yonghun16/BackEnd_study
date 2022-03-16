#include <stdio.h>

void squeeze(char line[], int maxline);

int main()
{
    char line[] = "The name of rose";
    char c = 'r';

    squeeze(line, c);

    printf("%s", line);

    return 0;
}

/* s에서 문자 c를 모두 제거하는 함후 */

void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
       if (s[i] != c)           // c가 s[i]에 없으면
           s[j++] = s[i];       // s[j]에 입력함 j는 새로운 index
    }
    s[j] = '\0';
}
