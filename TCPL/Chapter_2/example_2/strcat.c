#include <stdio.h>

void strcat(char s[], char t[]);

int main()
{
    char s[] = "start";
    char t[] = "end";

    strcat(s, t);
    printf("%s", s);

    return 0;
}

/* strcat : concatenate t to end of s; 문자열을 연결함 */

void strcat(char s[], char t[])
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
		i++;
	while ((s[i++] = t[j++]) != '\0')
		;
}
