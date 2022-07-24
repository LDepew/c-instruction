
#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Starting Population: ");
    }
    while(start < 9);

    /*int startSize = 0;
    while(startSize < 9)
    {
        printf("Start size: ");
        scanf("%d", &startSize);
    }*/

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("Ending Population: ");
    }
    while(start > end);

    /*int endSize = 0;
    while (endSize < startSize)
    {
        printf("End size: ");
        scanf(" %d", &endSize);
    }*/

    // TODO: Calculate number of years until we reach threshold
    int year = 0;
    do
    {
        start = start + (start/3) - (start/4);
        year++;
    }
    while(start < end);

    /*int year = 0;
    while (startSize < endSize)
    {
        int amtBorn = startSize / 3;
        int amtPass = startSize / 4;

        startSize = startSize + amtBorn - amtPass;
        year++;
    }*/

    

    // TODO: Print number of years
    printf("Years: %i\n", year);
}