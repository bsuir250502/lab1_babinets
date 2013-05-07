#include <stdio.h>
#include <stdlib.h>

int scan_sem(char *message, int min, int max)
{
    char input[1024];
    int num;
    while(1)
    {
        printf("%s ", message);
        fgets(input, 1024, stdin);
        num=atoi(input);
        if(num<min || num>max) puts("Enter correct number! Retry...");
        else return num;
    }
}

/*char scan_char(char *message, int buffer)
{
    char input[buffer];
    printf("%s ", message);
    return fgets(input, buffer, stdin);
}*/