#include <stdio.h>

int scan_int(char *message, int min, int max)
{
    char input[100];
    printf("%s ", message);
    while(1)
    {
        fgets(input, 100, stdin);
        if(atoi(input)<min || atoi(input)>max) puts("Enter correct number! Retry...");
        else return atoi(input);
    }
    return -1;
}