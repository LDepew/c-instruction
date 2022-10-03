#include <stdio.h>

int main(void)
{
    const int arr[] = {1, 2, 3, 4, 5, 6, 7};

    //Always scales linearly, equal time to calculate regardless of size

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%i\n", (1000 * 100000));
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%i\n", (1000 * 100000));
        int something = (200000000 * 200000000) / 2;
        printf("%i\n", something);
    }
}