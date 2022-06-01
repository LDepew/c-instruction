#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("Hello, %s\n", answer);

    printf("Hello, %s\n", get_string("What's your name? "));
}