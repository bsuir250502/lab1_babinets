#include <stdio.h>
#include <stdlib.h>
#define num_of_stud 5

typedef struct 
{
    char surname[20], name[15], patr[15];
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
	stud_name student;
	sem exams;
} marks[num_of_stud];	

void ins_stud_names();

int main(char *argv[])
{
	char name_of_exams[][]= {"Math, Arithmetics, Programming",
							"Math, Programming, Physics, English"};
    int i, sem;

    
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

void ins_stud_names()
{
	marks[0].student.surname
	marks[0].student.name
	marks[0].student.patr
	marks[1].student.surname
	marks[1].student.name
	marks[1].student.patr
	marks[2].student.surname
	marks[2].student.name
	marks[2].student.patr
	marks[3].student.surname
	marks[3].student.name
	marks[3].student.patr
	marks[4].student.surname
	marks[4].student.name
	marks[4].student.patr
}