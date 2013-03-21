#include <stdio.h>
#include <stdlib.h>

struct stud_name
{
    char f_name[20], name[15], patr[15];
    int sem;
}

int main()
{
    int i;
    stud_name stud[5];
    stud[0].f_name="Ivanov";
    stud[1].f_name="Petrov";
    stud[2].f_name="Sidorov";
    stud[3].f_name="Fam3";
    stud[4].f_name="Fam4";
	
    for(i=0; i<5; i++)
    {
        puts("Enter %d student's first name", i);
        gets(stud[i].f_name);
        puts("Enter %d student's name", i);
        gets(stud[i].name);
        puts("Enter %d student's", i);
        gets(stud[i].patr);
        puts("Enter %d semestr", i);
        scanf_s("%d", &stud[i].sem);
    }
    puts("Comming soon...");
    return 0;
}