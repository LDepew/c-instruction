#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Dynamically allocate array of size 3
    int *list = malloc(3 * sizeof(int));

    if (list == NULL)
    {
        return 1;
    }

    //assign 3 numbers to that array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time Passes

    //resize old array to be of size 4
    int *tmp = realloc(list, 4 * sizeof(int));

    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    /* No Longer Necessary with realloc!
    //copy numbers of old array into new array
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    } */

    //Add 4th number to new array
    tmp[3] = 4;

    //remember new array
    list = tmp;

    //print new array
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    //free new array
    free(list);
    return 0;
}