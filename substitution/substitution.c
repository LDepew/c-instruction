#include "cs50.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[]) 
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    int key = 0;

    for (int i = 0; i < strlen(argv[1]); i ++)
    {
        if (isalpha(argv[1][i]))
        {
            key++;
        }
        else
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }

    if (key != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for (int j = 0; j < strlen(argv[1]); j++)
    {
        for (int k = j + 1; k < strlen(argv[1]); k++)
        {
            if (toupper(argv[1][j]) == toupper(argv[1][k]))
            {
                printf("Usage: ./broken key\n");
                return 1;
            }
        }
    }

    string plaintext = get_string("plaintext: ");

    for (int l = 0; l < strlen(argv[1]); l++)
    {
        if (islower(argv[1][l]))
        {
            argv[1][l] = argv[1][l] - 32;
        }
    }

    for (int m = 0; m < strlen(plaintext); m++)
    {
        if (isupper(plaintext[m]))
        {
            int letter = plaintext[m] - 65;
            printf("%c", argv[1][letter]);
        }
        else if (islower(plaintext[m]))
        {
            int letter = plaintext[m] - 97;
            printf("%c", argv[1][letter] + 32);
        }
        else
        {
            printf("%c", plaintext[m]);
        }
    }

    printf("\n");
}