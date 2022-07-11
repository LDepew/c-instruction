#include "cs50.h"
#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));

    int numbers[] = {4, 6, 8, 2, 7, 5, 0};
    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));

    string sname = get_string("Name: ");
    char cname = get_char("Char: ");
    double dname = get_double("Double: ");
    float fname = get_float("Float: ");
    int iname = get_int("Int :");
    long lname = get_long("Long: ");
    long lname2 = get_long_long("Long Long: ");


    /*
    char *p = &s[0];
    printf("%p\n", p);
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    */
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