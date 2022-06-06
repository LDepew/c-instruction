#include <stdio.h>
#include <stdlib.h>

int main()
{

    int favNum = 90;
    char myChar = 'i';

    printf("Hello World\n");

    printf("My favorite %s is %d\n", "number", 500);

    printf("My favorite %s is %f\n", "number", 500.98754);

    printf("My favorite number is %d\n", favNum);

    printf("My favorite %c is %d\n", myChar, favNum);

    return 0;

}