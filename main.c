#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <stdlib.h>
#include "custom_fun.h"

#define num_of_stud 5
#define num_of_sem1_exams 3
#define num_of_sem2_exams 4

struct stud_name
{
    char surname[20], name[15], patr[15];
    int sem;
};

union sem
{
    int sem1_marks[num_of_sem1_exams];
    int sem2_marks[num_of_sem2_exams];
};    

typedef struct stud_info
{
    struct stud_name student;
    union sem exams;
} marks[num_of_stud];    


char ins_stud_names();
void help();

int main(int argc ,char *argv[])
{
    char name_of_exams[2][36] = {"Math, Arithmetics, Programming",
                                "Math, Programming, Physics, English"};
    int i, j, sem;
    struct stud_info marks[num_of_stud];
    //printf("%d", scan_sem("Enter semestr: ", 1, 6));
    switch(*argv[1])
    {
        case 104: help(); break;
        case 108: break;
        default: help();
    }

    
    for(i=0; i<num_of_stud; i++)
    {
        printf("Enter %d student's first name", i+1);
        fgets(marks[i].student.surname, 20, stdin);
        printf("Enter %d student's name", i+1);
        fgets(marks[i].student.name, 15, stdin);
        printf("Enter %d student's", i+1);
        fgets(marks[i].student.patr, 15, stdin);
        printf("Enter %d student semester", i+1);
        marks[i].student.sem=scan_sem("\n", 1, 2);
    }
    sem=scan_sem("Enter semestr:", 1, 2);
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

#ifdef __cplusplus
}
#endif
