#include <stdio.h>

double cm_to_m(double cm);

int main(void)
{
    double cm = 187;
    printf("%.2lfm\n", cm_to_m(cm));

    return 0;
}

double cm_to_m(double cm)
{
    double m;
    m = cm / 100.0;
    return m;
}
