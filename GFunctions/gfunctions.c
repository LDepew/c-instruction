#include <stdio.h>
#include <stdlib.h>

void sayHi();

int main()
{
    printf("Top\n");
    sayHi("Lance", 37);
    sayHi("Bob", 18);
    sayHi("Lewis", 45);
    printf("Bottom\n");

    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s,  you are %d\n", name, age);
}