#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void) 
{
    string text = get_string("Text: ");
    int Letters = count_letters(text);
    int Words = count_words(text) + 1;
    int Sentences = count_sentences(text);
    
    float L = 100.0 * Letters / Words;
    float S = 100.0 * Sentences / Words;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    //printf("%s\n", text);
    //printf("%i letters\n", Letters);
    //printf("%i words\n",  Words);
    //printf("%i sentences\n", Sentences);
    //printf("L: %f\n", L);
    //printf("S: %f\n", S);

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(string text)
{
    int count = strlen(text);
    int num = 0;

    for (int i = 0; i < count; i++)
    {
        if(isupper(text[i]))
        {
            num++;
        }
        else if(islower(text[i]))
        {
            num++;
        }
    }

    return num;
}

int count_words(string text)
{
    int count = strlen(text);
    int words = 0;

    for (int j = 0; j < count; j++)
    {
        if (text[j] == ' ' && text[j+1] != ' ')
        {
            words++;
        }
    }

    return words;
}

int count_sentences(string text)
{
    int count = strlen(text);
    int sentences = 0;

    for (int k = 0; k < count; k++)
    {
        if (text[k] == '.' || text[k] == '?' || text[k] == '!')
        {
            sentences++;
        }
    }

    return sentences;
}