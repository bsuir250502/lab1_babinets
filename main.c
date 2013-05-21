#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <stdlib.h>
#include "custom_fun.h"

#define num_of_stud 5
#define num_of_sem1_exams 3
#define num_of_sem2_exams 4
#define string_size 20

struct stud_name
{
    char surname[string_size], name[string_size], patr[string_size];
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
    switch(*argv[1])
    {
        case 104: help(); break;
        case 108: break;
        default: help();
    }

    
    for(i=0; i<num_of_stud; i++)
    {
        printf("Enter %d student's surname: ", i+1);
        fgets(marks[i].student.surname, string_size, stdin);
        printf("Enter %d student's name: ", i+1);
        fgets(marks[i].student.name, string_size, stdin);
        printf("Enter %d student's patronymic: ", i+1);
        fgets(marks[i].student.patr, string_size, stdin);
        printf("Enter %d student semester: ", i+1);
        marks[i].student.sem=scan_int("\n", 1, 2);
        printf("Enter %d student marks for: %s.\n", i+1, name_of_exams[marks[i].student.sem-1]);
        if(marks[i].student.sem==1)
            for(j=0; j<num_of_sem1_exams; j++)
                marks[i].exams.sem1_marks[j]=scan_int("", 0, 10);
        else for(j=0; j<num_of_sem2_exams; j++)
                marks[i].exams.sem2_marks[j]=scan_int("", 0, 10);
    }
    sem=scan_int("Enter semestr:", 1, 2);
    printf("Exams: %s\n", name_of_exams[sem-1]);
    for(i=0; i<num_of_stud; i++)
    {
        if(sem==marks[i].student.sem) 
        {
            printf("\nSurname: %sName: %sPatronymic: %sMarks: ", marks[i].student.surname, marks[i].student.name, marks[i].student.patr);
            if(sem==1) 
                for(j=0; j<num_of_sem1_exams; j++)
                    printf("%d, ", marks[i].exams.sem1_marks[j]);
            else
                for(j=0; j<num_of_sem2_exams; j++)
                    printf("%d, ", marks[i].exams.sem2_marks[j]);
        }
    }  
    exit(0);
}

void help()
{
    printf("Lab1, var1. Usage:\n    -h  -  prints this message.\n    -l -  exec program.\a");
    exit(1);
}

#ifdef __cplusplus
}
#endif
