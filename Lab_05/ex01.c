#include <stdio.h>
#include <stdlib.h>


struct Student {
    /*
        DESCRIPTION: This is a structure which is used to store attributes of students.
        MEMBERS: --{stu_name, stu_roll}-- [character array of size 20, integer]
    */
    char stu_name[20];
    int stu_roll;
};

struct Student* create_student(char name[], int roll)
{ 
    /*
        INPUT: --{name, roll}-- [character array, integer]
        OUTPUT: --*s-- [struct Student pointer] Outputs the structure.

        DEPENDENCIES: --struct Student--
        DESCRIPTION: This is a function that is used to assign value to a variable of type struct of Student
    */
    struct Student *s = malloc(sizeof(struct Student));
    
    for (int i = 0; i < 20; i++) {
        s->stu_name[i] = name[i];
    }
    s->stu_roll = roll;

    return s;
}

int main()
{
    char sname[20];
    printf("Enter student name: ");
    scanf("%s", &sname);

    int rno;
    printf("Enter student roll number: ");
    scanf("%d", &rno);

    struct Student* s1 = create_student(sname, rno);

    return 0;
}
