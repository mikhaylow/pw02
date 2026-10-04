#include <stdio.h>

int main(void)
{
    int dec, hex, oct;

    scanf("%d %x %o", &dec, &hex, &oct);

    printf("UNIT_ID: %d\nUNIT_VERSION: %d\nUNIT_STATUS: %d\n", dec, hex, oct);

    int sum = dec + hex + oct;

    printf("SUM: %d\n", sum);

    return 0;
}