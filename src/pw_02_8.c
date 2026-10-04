#include <stdio.h>
#include <float.h>

int main()
{
    printf("FLOAT: size=%ld, digits=%d, max=%e\nDOUBLE: size=%ld, digits=%d, max=%e\nLDOUBLE: size=%ld, digits=%d, max=%Le\n", sizeof(float), FLT_DIG, FLT_MAX,
           sizeof(double), DBL_DIG, DBL_MAX, sizeof(long double), LDBL_DIG, LDBL_MAX);

    return 0;
}