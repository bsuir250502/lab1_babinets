#include <stdio.h>
#include <stdlib.h>
#define n 5

struct stud_name
{
    char f_name[20], name[15], patr[15];
    int sem;
}

int main(char *argv[])
{
    int i, sem;
    /*stud_name stud[n]=
    {
        {"Ivanov", "Ivan", "Ivanovich", 1},
        {"Petrov", "Petr", "Petrovich", 1},
        {"Sidorov", "Pavel", "Andreevich", 1}
    };
    stud[3].f_name="Fam3";
    stud[4].f_name="Fam4";*/
    stud_name stud[n];
    
    for(i=0; i<n; i++)
    {
        printf("Enter %d student's first name", i);
        gets(stud[i].f_name);
        printf("Enter %d student's name", i);
        gets(stud[i].name);
        printf("Enter %d student's", i);
        gets(stud[i].patr);
        printf("Enter %d student semestr", i);
        scanf_s("%d", &stud[i].sem);
    }
    puts("Enter semestr");
    scanf_s("%d", &sem);
    system("cls");
    for(i=0; i<n; i++)
    {
        if(sem==stud[i].sem);
    }
    puts("Comming soon...");
    return 0;
}