#include <stdio.h>

int main(void)
{
    int list[] = {-9, -2, 0, 2, 3};
    int size = sizeof(list)/ sizeof(list[0]);

    for (int i = 0; i < size; i++)
    {
        list[i] = list[i] * list[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    for ( int i = 0; i < size; i++)
    {
        printf("%i \n", list[i]);
    }
}