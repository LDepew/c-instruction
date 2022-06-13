#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    
    printf("Enter grade: ");
    scanf(" %c", &grade);

    switch(grade) {
        case 'a':
        printf("You did great!\n");
        break;
        case 'b':
        printf("You did alright!\n");
        break;
        case 'c':
        printf("You did poorly\n");
        break;
        case 'd':
        printf("You did very badly\n");
        break;
        case 'f':
        printf("You failed\n");
        break;
        default:
        printf("Invalid Grade\n");
        break;
    }


    return 0;
}