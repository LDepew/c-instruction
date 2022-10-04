#include <stdio.h>

int main(void)
{
    //O(n^3)

    int number;
    printf("Enter number: ");
    scanf("%i", &number);
    printf("%i\n", number);

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            for (int k = 0; k < number; k++)
            {
                printf("[]");
            }

            printf("\n");
        }

        printf("\n");
    }
}