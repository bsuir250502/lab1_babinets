#include <stdio.h>
#include <stdlib.h>

#define num_of_stud 5
#define num_of_sem1_exams 5
#define num_of_stud 5

typedef struct 
{
    char surname[20], name[15], patr[15];
    int sem;
} stud_name;

typedef union
{
	int sem1_marks[4];
	exam sem2_marks[4];
} sem;	

typedef struct
{
	stud_name student;
	sem exams;
} marks[num_of_stud];	
marks[i].exams.sem1_marks

void ins_stud_names();

int main(char *argv[])
{
	char name_of_exams[2][36]= {"Math, Arithmetics, Programming",
							"Math, Programming, Physics, English"}, tmp;
    int i, sem;

    
    for(i=0; i<num_of_stud; i++)
    {
        /*printf("Enter %d student's first name", i);
        fgets(marks[i].student.f_name, 20, stdin);
        printf("Enter %d student's name", i);
        fgets(marks[i].student.name, 15, stdin);
        printf("Enter %d student's", i);
        fgets(marks[i].student.patr, 15, stdin);*/
		printf("Enter %d student semestr", i);
		while(1)
		{
			fgets(tmp, 1, stdin);
			if(atoi(tmp)<1 || atoi(tmp)>2) puts("Enter correct semestr number!");
			else 
			{
				marks[i].student.sem=atoi(tmp);
				break;
			}
		}
    }
    printf("Enter semestr: ");
    while(1)
	{
		fgets(tmp, 1, stdin);
		if(atoi(tmp)<1 || atoi(tmp)>2) puts("Enter correct semestr number!");
		else 
		{
			sem=atoi(tmp);
			break;
		}
	}
	printf("Exams: %s\n", name_of_exams[sem]);
    for(i=0; i<num_of_stud; i++)
    {
        if(sem==marks[i].student.sem) 
		{
			printf("Name: %s %s %s, marks: ", marks[i].student.surname, marks[i].student.name, marks[i].student.patr);
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