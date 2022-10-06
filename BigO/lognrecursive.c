#include <stdio.h>
#include <math.h>

int main(void)
{
    //BigO(log^n) recursive

    int number;
    printf("Enter number: ");
    scanf("%i", &number);
    printf("%i\n", number);

    printf("%i\n", logfunc(number));
}

int logfunc(n)
{
    if (n == 0)
    {
        return 1;
    }
    n = floor(n / 2);
    return logfunc(n);
}