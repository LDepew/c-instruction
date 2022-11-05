#include <stdio.h>

int main(void)
{
    int somenumbers[5];
    int *ptr = somenumbers; // &somenumbers[0]

    int v = 2;

    for (; ptr < &somenumbers[5]; ptr++)
    {
        *ptr = v;
        v = v * 2;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", somenumbers[i]);
    }
}