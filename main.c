#include <stdio.h>
#include <stdlib.h>
#define n 5

typedef struct 
{
    char f_name[20], name[15], patr[15];
    int sem;
} stud_name;

typedef struct
{
	int exam_number;
	int mark;
} exam;

typedef union
{
	exam sem1[20];
	exam sem2[20];
} sem;

typedef struct
{
	stud_name name;
	sem sem;
} info;
	

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
    info stud[n];
    
    for(i=0; i<n; i++)
    {
        printf("Enter %d student's first name", i);
        fgets(stud[i].name.f_name, 20, stdin);
        printf("Enter %d student's name", i);
        fgets(stud[i].name.name, 15, stdin);
        printf("Enter %d student's", i);
        fgets(stud[i].name.patr, 15, stdin);
        printf("Enter %d student semestr", i);
        fgets("%d", &stud[i].name.sem);
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