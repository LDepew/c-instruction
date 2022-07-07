//#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    char *p = &s[0];
    printf("%p\n", p);
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);

    /*
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
    //same thing without storing in a variable
    printf("%p\n", &n);
    //Dereference and go to pointer
    printf("%i\n", *p);
    */
}