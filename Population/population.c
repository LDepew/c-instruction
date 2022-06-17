
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    printf("Start Size: ");
    int startPop = scanf("%d", &startPop);

    // TODO: Prompt for end size
    printf("End Size: ");
    int endPop = scanf(" %d", &endPop);
    int numTotal;
    int years;
    // TODO: Calculate number of years until we reach threshold
   while (startPop != endPop)
   {
    years = 0;

    int numBorn = startPop / 3;
    int numDie = startPop / 4;
    numTotal = startPop;

    numTotal = startPop + numBorn;
    numTotal = startPop - numDie;

    printf("%d", numTotal);
    years++;
   }

   printf("%d", numTotal);

    // TODO: Print number of years
    printf("Years: %d", years);
}