#include <stdio.h>

#define MAX_LINE 1000

int atoi(char s[]);
char line[MAX_LINE];

int main()
{
    int c;
    int n = 0;
    while((c = getchar()) != EOF) {
        line[n] = c; 
        n++;
    }
    line[n] = '\0';
    printf("%d\n", atoi(line));

    return 0;
}

/* atoi: convert s to integer */
int atoi(char s[])
{
    int i, n;

    n = 0;
    for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = (10 * n) + (s[i] - '0');
    }

    return n;
}
