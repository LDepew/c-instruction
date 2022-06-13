#include <stdio.h>
#include <stdlib.h>

int Gmax(int num1, int num2, int num3) {
    int result;

    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

int main()
{
    printf("%d\n", Gmax(4, 10, 12));

    if (3 < 2 || 2 > 5) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    if (!(3 < 2)) {
        printf("True\n");
    }

    return 0;
}