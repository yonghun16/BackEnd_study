#include <stdio.h>

int recurtive(int a);

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);

    printf("%d\n", recurtive(n));

    return 0;
}

int recurtive(int a)
{
    int sum;
    if(a > 0) {
        sum = a+ recurtive(a-1);
        return sum;
    }

    return 0;
}
