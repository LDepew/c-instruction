#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool only_digits(string arg);
char rotate(char letter, int numspace);

int main(int argc, string argv[]) 
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
        
    if(only_digits(argv[1]) == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (only_digits(argv[1]) == true)
    {
        

        int key = atoi(argv[1]);

            string plaintext = get_string("plaintext: ");
            printf("ciphertext: ");

            for (int j = 0; j < strlen(plaintext); j++)
            {
                printf("%c", rotate(plaintext[j], key));
            }

            printf("\n");
            return 0;
    }
}

bool only_digits(string arg)
{
    for (int i = 0; i < strlen(arg); i++)
        {
            if (!isdigit(arg[i]))
            {
                
                return false;
            }            
        }
        return true;
}

char rotate(char letter, int numspace)
{
    if (isupper(letter))
                {
                    return("%c", (letter - 65 + numspace) % 26 + 65);
                }
                else if (islower(letter))
                {
                    return("%c", (letter - 97 + numspace) % 26 + 97);
                }
                else
                {
                    return("%c", letter);
                }
}