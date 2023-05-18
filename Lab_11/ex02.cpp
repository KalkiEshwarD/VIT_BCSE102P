#include <stdio.h>
#include <string.h>


struct Date {
    unsigned int Date;
    unsigned int Month;
    unsigned int Year; 
};

struct Student {
    unsigned int Roll_number;
    char Name[20];
    char Department[30];
    char Course[20];
    int Year_of_joining;
    struct Date Date_of_Birth;
};


void print_names(struct Student student_array[], unsigned int n, int Year_of_joining)
{

}


void print_details(struct Student student_array[], unsigned int n, unsigned int Roll_number)
{
    for (int i = 0; i < n; i++) {
        if (Roll_number == student_array[i].Roll_number) {
            printf("\n");
            printf("Roll Number: %d\n", student_array[i].Roll_number);
            printf("Name: %s\n", student_array[i].Name);
            printf("Department: %s\n", student_array[i].Department);
            printf("Course: %s\n", student_array[i].Course);
            printf("Year of Joining: %d\n", student_array[i].Year_of_joining);
            printf("Date of Birth %d/%d/%d", student_array[i].Date_of_Birth.Date, student_array[i].Date_of_Birth.Month, student_array[i].Date_of_Birth.Year);
            printf("\n");
        }
    }
}


int main()
{
    struct Student s1;
    s1.Roll_number = 123;
    strcpy(s1.Name, "Kalki");
    strcpy(s1.Department, "CSE");
    strcpy(s1.Course, "OOPS");
    s1.Year_of_joining = 2022;
    struct Date DOB;
    DOB.Date = 01;
    DOB.Month = 01;
    DOB.Year = 2000;
    s1.Date_of_Birth = DOB;

    struct Student stu_arr[10];
    stu_arr[0] = s1;

    print_details(&s1, 1, 123);

    return 0;
}
