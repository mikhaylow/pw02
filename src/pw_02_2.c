#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    bool a_bool = a;
    bool b_bool = b;

    printf("MODULE_READY: %d\nFAULT_STATE: %d\nBOOL_SIZE: %ld\nFLAGS_SUM: %d\n", a_bool, b_bool, sizeof(bool), a + b);

    return 0;
}