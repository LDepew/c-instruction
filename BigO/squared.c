#include <stdio.h>

int main(void)
{
    //O(n^2)

    int number;
    printf("Enter number:");
    scanf(" %i", &number);
    printf("%i\n", number);

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            printf("[]");
        }

        printf("\n");
    }
}