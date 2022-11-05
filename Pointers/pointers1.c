#include <stdio.h>

int main(void)
{
    int x = 7;
    printf("x is %d\n", x);

    x = 14;
    printf("x is %d\n", x);

    int *aptr = &x;
    printf("aptr is %x\n", aptr);

    printf("x is %d\n", *aptr);

    *aptr = 21;

    printf("x is %d %d\n", x, *aptr);
}