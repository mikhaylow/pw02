#include <stdio.h>

int main(void)
{
    int dec, hex, oct;

    if (scanf("%d %x %o", &dec, &hex, &oct) != 3)
    {
        return -1;
    }

    printf("UNIT_ID: %d\nUNIT_VERSION: %d\nUNIT_STATUS: %d\n", dec, hex, oct);

    int sum = dec + hex + oct;

    printf("SUM: %d\n", sum);

    return 0;
}