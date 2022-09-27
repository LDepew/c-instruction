#include <stdio.h>
#include <math.h>

int main(void)
{
    int num1;
    printf("Enter numerator: ");
    scanf("%i", &num1);
    int num2;
    printf("Enter denominator: ");
    scanf(" %i", &num2);

    if (num1 < num2)
    {
        printf("%d / %d\n", num1, num2);
    }
    else
    {
        printf("numerator must be lesser than denominator!\n");
    }
}