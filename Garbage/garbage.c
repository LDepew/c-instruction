#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int scores[3];

    //must initialize values, or else receive leftover (garbage) values

    scores[0] = 10;
    scores[1] = 12;
    scores[2] = 14;

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", scores[i]);
    }
}