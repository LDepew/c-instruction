#include <stdio.h>
#include <math.h>

int main(void)
{
    //BigO(log^n) iterative

    int number;
    printf("Enter number: ");
    scanf("%i", &number);
    printf("%i\n", number);

    printf("%i\n", logn(number));
}

int logn(n)
{
    while (n > 1)
    {
        n = floor(n / 2);
    }
}