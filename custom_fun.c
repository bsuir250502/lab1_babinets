#include <stdio.h>
#include <stdlib.h>


int scan_int(char *message, int min, int max)
{
    char input[1024];
	int num;
    printf("%s ", message);
    while(1)
    {
        fgets(input, 1024, stdin);
        if(num=atoi(input)<min || num>max) puts("Enter correct number! Retry...");
        else return num;
    }
    return 0;
}

/*char scan_char(char *message, int buffer)
{
    char input[buffer];
    printf("%s ", message);
    return fgets(input, buffer, stdin);
}*/