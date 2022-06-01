#include <stdio.h>

void meow(int n);

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

    meow(3);
}




void meow(int n)
{
    for(int i = 0; i < n; i++)
    {
    printf("meow\n");
    }
}