#include <stdio.h>
#include <stdlib.h>

#define num_of_stud 5
#define num_of_sem1_exams 3
#define num_of_sem2_exams 4

struct stud_name
{
    char surname[20], name[15], patr[15];
    int sem;
};

typedef union
{
	int sem1_marks[num_of_sem1_exams];
	int sem2_marks[num_of_sem2_exams];
} sem;	

typedef struct stud_info
{
	stud_name student;
	sem exams;
} marks[num_of_stud];	


char ins_stud_names();

int main(char *argv[])
{
	char name_of_exams[2][36]= {"Math, Arithmetics, Programming",
							"Math, Programming, Physics, English"}, *tmp;
    int i, j, sem;
	stud_info marks[num_of_stud];
	tmp=(char*)malloc(4);
    
    for(i=0; i<num_of_stud; i++)
    {
        /*printf("Enter %d student's first name", i);
        fgets(marks[i].student.f_name, 20, stdin);
        printf("Enter %d student's name", i);
        fgets(marks[i].student.name, 15, stdin);
        printf("Enter %d student's", i);
        fgets(marks[i].student.patr, 15, stdin);*/
		printf("Enter %d student semester", i);
		while(1)
		{
			fgets(tmp, 4, stdin);
			if(atoi(tmp)<1 || atoi(tmp)>2) puts("Enter correct semestr number!");
			else 
			{
				marks[i].student.sem=atoi(tmp);
				break;
			}
		}
    }
    printf("Enter semester: ");
    while(1)
	{
		fgets(tmp, 4, stdin);
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
			printf("\n");
			printf("Name: %s %s %s, Marks: ", marks[i].student.surname, marks[i].student.name, marks[i].student.patr);
			if(sem==1) 
				for(j=0; j<num_of_sem1_exams; j++)
					printf("%d", marks[i].exams.sem1_marks[j]);
			else
				for(j=0; j<num_of_sem1_exams; j++)
					printf("%d", marks[i].exams.sem1_marks[j]);
		}
    }
	
    return 0;
}

/*char ins_stud_names()
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
}*/