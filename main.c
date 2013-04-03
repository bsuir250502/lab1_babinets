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
							"Math, Programming, Physics, English"}, tmp;
    int i, sem;

    
    for(i=0; i<n; i++)
    {
        /*printf("Enter %d student's first name", i);
        fgets(stud[i].name.f_name, 20, stdin);
        printf("Enter %d student's name", i);
        fgets(stud[i].name.name, 15, stdin);
        printf("Enter %d student's", i);
        fgets(stud[i].name.patr, 15, stdin);*/
		printf("Enter %d student semestr", i);
		while(1)
		{
			fgets(tmp, 1, stdin);
			if(atoi(tmp)<1 || atoi(tmp)>2) puts("Enter correct semestr number!");
			else 
			{
				stud[i].name.sem=atoi(tmp);
				break;
			}
		}
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
	marks[0].student.surname="Ivanov";
	marks[0].student.name="Ivan";
	marks[0].student.patr="Ivanovich";
	marks[1].student.surname="Petrov";
	marks[1].student.name="Petr";
	marks[1].student.patr="Petrovich";
	marks[2].student.surname="Sidorov";
	marks[2].student.name="Ivan";
	marks[2].student.patr="Pavlovich";
	marks[3].student.surname="Mojako";
	marks[3].student.name="Anton";
	marks[3].student.patr="Vladimirovich";
	marks[4].student.surname="Sheleg";
	marks[4].student.name="Nikolay";
	marks[4].student.patr="Borisovich";
}