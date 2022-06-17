#include <stdio.h>

int main(void)
{
    int n[7] = {4, 6, 8, 2, 7, 5, 0};

    for (int i = 0; i < 7; i++)
    {
        if(n[i] == 0){
            printf("True\n");
            return 0;
        }
    }
    printf("False\n");
    return 1;
}