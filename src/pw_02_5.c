#include <stdio.h>
#include <stdint.h>

int main()
{
    const unsigned int INT8T_VALUES = (unsigned int)INT8_MAX - (unsigned int)INT8_MIN + 1;
    printf("INT8: size=%ld, min=%d, max=%d, values=%d\n", sizeof(int8_t), INT8_MIN, INT8_MAX, INT8T_VALUES);

    printf("UINT_8: size=%ld, min=%d, max=%d, values=%d\n", sizeof(uint8_t), 0, UINT8_MAX, UINT8_MAX + 1);

    const unsigned int INT16_VALUES = (unsigned int)INT16_MAX - (unsigned int)INT16_MIN + 1;
    printf("INT_16: size=%ld, min=%d, max=%d, values=%d\n", sizeof(int16_t), INT16_MIN, INT16_MAX, INT16_VALUES);

    printf("UINT_16: size=%ld, min=%d, max=%d, values=%d\n", sizeof(uint16_t), 0, UINT16_MAX, UINT16_MAX + 1);

    const unsigned long long INT32_VALUES = (unsigned long long)INT32_MAX - (unsigned long long)INT32_MIN + 1;

    printf("INT_32: size=%ld, min=%d, max=%d, values=%llu\n", sizeof(int32_t), INT32_MIN, INT32_MAX, INT32_VALUES);

    const unsigned long long UINT32_VALUES = (unsigned long long)UINT32_MAX + 1;
    printf("UINT_32: size=%ld, min=%u, max=%u, values=%llu\n", sizeof(uint32_t), 0, UINT32_MAX, UINT32_VALUES);

    return 0;
}