#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n;
    do
    {
        n = get_int("Width: ");
    }
    while(n < 1);

    for(int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");

    int o;
    do
    {
        o = get_int("Size: ");
    }
    while(o < 1);

    //For each row
    for(int j = 0; j < o; j++)
    {
        //For each column
        for(int k = 0; k < o; k++)
        {
            //Print a brick
            printf("#");
        }

        //Move to next row
        printf("\n");
    }
    
}