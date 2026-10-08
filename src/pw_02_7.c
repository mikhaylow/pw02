#include <stdio.h>

int main()
{
    long double a;

    if (scanf("%Lf", &a) != 1)
    {
        return -1;
    }

    double b = a;

    float c = a;

    printf("FLOAT: %.6f\nDOUBLE: %.6f\nLDOUBLE: %.6Lf\nFLOAT+1: %.9f\nDOUBLE+1: %.9f\nLDOUBLE+1: %.9Lf\n", c, b, a, c + 1.0f, b + 1.0, a + 1.0L);

    return 0;
}