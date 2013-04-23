#include <stdio.h>

int scan_int(char *message, int buffer, int min, int max)
{
    char input[buffer];
	int num
    printf("%s ", message);
    while(1)
    {
        fgets(input, buffer, stdin);
        if(num=atoi(input)<min || num>max) puts("Enter correct number! Retry...");
        else return num;
    }
    return -1;
}

char scan_char(char *message, int buffer)
{
    char input[buffer];
    printf("%s ", message);
    return fgets(input, buffer, stdin);
}