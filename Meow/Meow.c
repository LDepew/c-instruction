#include <stdio.h>

int main(void)
{ 
    int i = 0;
    while(i < 3)
    {
        printf("meow\n");
        i++;
    }

    int i2 = 1;
    while(i2 <= 3)
    {
        printf("meow\n");
        i2++;
    }

    int i3 = 3;
    while(i3 > 0)
    {
        printf("meow\n");
        i3--;
    }

    for(int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}