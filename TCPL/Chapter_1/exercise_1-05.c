#include <stdio.h>

int main()
{
    int fahr;

    for (fahr = 300; fahr > 0; fahr = fahr - 20) {  // for문을 사용하여 화씨-섭씨 변환
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}
