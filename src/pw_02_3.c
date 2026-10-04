#include <stdio.h>

int main(void)
{
    int a, b, c;

    a = 10;
    b = 010;
    c = 0x10;

    printf("DEC_10: %d\nOCT_10: %d\nHEX_10: %d\n", a, b, c);

    printf("INT_SUFFIX: %ld %ld %ld %ld\n", sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
    printf("FLOAT_SUFFIX: %ld %ld %ld\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);

    char d, f, g;

    d = 'A';
    f = '\x41';
    g = '\101';

    printf("CHAR_FORMS: %d %d %d\n", d, f, g);
    printf("CHAR_LIT_VAR_STR: %ld %ld %ld\n", sizeof('A'), sizeof(d), sizeof("A"));

    return 0;
}
