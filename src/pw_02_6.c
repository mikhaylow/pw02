#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a;
    unsigned int num;

    if (scanf("%u", &num) != 1)
    {
        return -1;
    }

    a = (uint8_t)num;

    uint8_t sum = a + a;
    printf("ADD: %d\n", sum);

    uint8_t mult = a * 2;
    printf("MULT2: %d\n", mult);
    
    uint8_t sqr = a * a;
    printf("SQR: %d\n", sqr);

    return 0;
}