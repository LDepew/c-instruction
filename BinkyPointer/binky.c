#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    int *y;

    x = malloc(sizeof(int));

    *x = 42;
    *y = 13;
    //never allocated memory to y, causing potential garbage leak

    y = x;

    *y = 13;
}