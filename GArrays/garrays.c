#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    printf("%d\n", luckyNumbers[0]);

    int luckyNumbers2[10];
    luckyNumbers2[1] = 80;
    luckyNumbers2[0] = 90;
    printf("%d\n", luckyNumbers2[0]);


    return 0;
}