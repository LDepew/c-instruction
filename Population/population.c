
#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startSize = printf("Start size: ");
    scanf("%d", &startSize);

    // TODO: Prompt for end size
    int endSize = printf("End size: ");
    scanf(" %d", &endSize);

    // TODO: Calculate number of years until we reach threshold
    while (startSize < endSize)
    {

        for (int years = 0, startNum = startSize; years < 10; years++)
        {
            int amtBorn = startSize / 3;
            startNum = startNum + amtBorn;

            int amtPass = startSize / 4;
            startNum = startNum = amtPass;

            printf("%d", startNum);
        }
    }

    // TODO: Print number of years
}