#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;

    printf("%p\n", p);

    //same thing without storing in a variable
    printf("%p\n", &n);
}