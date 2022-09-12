#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    //write to file
    FILE *fp;

    fp = fopen("filename.txt", "w");

    fprintf(fp, "%s", "Hello, World");

    fclose(fp);

    //read from file
    FILE *fileName;

    char ch[100];

    fileName = fopen("filename.txt", "r");

    printf("%s\n", fgets(ch, 50, fileName));

    fclose(fileName);
    return 0;
}