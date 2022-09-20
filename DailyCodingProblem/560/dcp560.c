#include <stdio.h>

int main(void)
{
    int k = 17;

    int l[] = {10, 15, 3, 7};

    int num1;
    int num2;

    for (int i = 0; i < 4; i++)
    {
        num1 = l[i];
        printf("l: %i\n", l[i]);

        for (int j = 0; j < 4 && j != i; j++)
        {
            num2 = l[j];
            printf("j: %i\n", l[j]);

            if (num1 + num2 == k)
            {
                printf("%i %i = true\n", num1, num2);
                break;
            }

            else
            {
                printf("%i %i = false\n", num1, num2);
                break;
            }
        }
    }
}