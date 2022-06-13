#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main()
{
    for (int i = 0; i <= 3; i++)
    {
        //printf("i is %i\n", i);
        printf("#\n");
    }

    int i2 = get_negative_int();
    printf("%i\n", i2);
}

int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Negative Integer: ");
        printf("n is %i\n", n);
    }
    while (n < 0);
    return n;
}