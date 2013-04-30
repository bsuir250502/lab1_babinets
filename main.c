#include <stdio.h>
#include <stdlib.h>
#include "custom_fun.h"

#define num_of_stud 5
#define num_of_sem1_exams 3
#define num_of_sem2_exams 4

typedef struct stud_name
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
void help();

int main(char *argv[])
{
    switch(*argv[1])
    {
        case 'h': help(); break;
        case 'l': break;
        default: help();
    }
    char name_of_exams[2][36] = {"Math, Arithmetics, Programming",
                                "Math, Programming, Physics, English"};
    int i, j, sem;
    stud_info marks[num_of_stud];
    
    for(i=0; i<num_of_stud; i++)
    {
        printf("Enter %d student's first name", i);
        fgets(marks[i].student.surname, 20, stdin);
        printf("Enter %d student's name", i);
        fgets(marks[i].student.name, 15, stdin);
        printf("Enter %d student's", i);
        fgets(marks[i].student.patr, 15, stdin);
        printf("Enter %d student semester", i);
        marks[i].student.sem=scan_int("\n", 4, 1, 2);
    }
    sem=scan_int("Enter semestr: ", 4, 1, 2);
    printf("Exams: %s\n", name_of_exams[sem]);
    for(i=0; i<num_of_stud; i++)
    {
        if(sem==marks[i].student.sem) 
        {
            printf("\n");
            if(sem==1) 
                for(j=0; j<num_of_sem1_exams; j++)
                {
                    printf("%d", marks[i].exams.sem1_marks[j]);
                    printf("Name: %s %s %s, Marks: ", marks[i].student.surname, marks[i].student.name, marks[i].student.patr);
                }
            else
                for(j=0; j<num_of_sem2_exams; j++)
                {
                    printf("%d", marks[i].exams.sem2_marks[j]);
                    printf("Name: %s %s %s, Marks: ", marks[i].student.surname, marks[i].student.name, marks[i].student.patr);
                }
        }
    }  
    return 0;
}

void help()
{
    printf("Lab1, var1. Usage:\n    -h  -  prints this message.\n    -l 1 or -l 2  -  exec program and print info about first or second semester\a");
    exit(1);
}
