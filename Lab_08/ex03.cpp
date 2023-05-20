#include <iostream>
#include <string>


typedef struct Date {
    int date;
    int month;
    int year;
} Date;


class Student
{
    public:
        std::string Name;
        Date DOB;
        int RollNo;
        int Age;
    
    void get_data(std::string Name, int date, int month, int year, int RollNo, int Age)
    {
        this->Name = Name;
        this->DOB.date = date;
        this->DOB.month = month;
        this->DOB.year = year;
        this->RollNo = RollNo;
        this->Age = Age;
    }
    void display_details()
    {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Date of Birth: " <<DOB.date << "/" << DOB.month << "/" << DOB.year << std::endl;
        std::cout << "Roll Number: " << RollNo << std::endl;
        std::cout << "Age: " << Age << std::endl;
    }    
};


class CSE: public Student
{
    public:
        int sub1;
        int sub2;
        int sub3;

    void get_marks(int sub1, int sub2, int sub3)
    {
        this->sub1 = sub1;
        this->sub2 = sub2;
        this->sub3 = sub3;
    }

    void display_marks()
    {
        std::cout << "Subject 1 Marks: " << sub1 << std::endl;
        std::cout << "Subject 2 Marks: " << sub2 << std::endl;
        std::cout << "Subject 3 Marks: " << sub3 << std::endl;
    }
};


class IT: public Student
{
    public:
        int sub1;
        int sub2;
        int sub3;

    void get_marks(int sub1, int sub2, int sub3)
    {
        this->sub1 = sub1;
        this->sub2 = sub2;
        this->sub3 = sub3;
    }

    void display_marks()
    {
        std::cout << "Subject 1 Marks: " << sub1 << std::endl;
        std::cout << "Subject 2 Marks: " << sub2 << std::endl;
        std::cout << "Subject 3 Marks: " << sub3 << std::endl;
    }
};


class ECE: public Student
{
    public:
        int sub1;
        int sub2;
        int sub3;

    void get_marks(int sub1, int sub2, int sub3)
    {
        this->sub1 = sub1;
        this->sub2 = sub2;
        this->sub3 = sub3;
    }

    void display_marks()
    {
        std::cout << "Subject 1 Marks: " << sub1 << std::endl;
        std::cout << "Subject 2 Marks: " << sub2 << std::endl;
        std::cout << "Subject 3 Marks: " << sub3 << std::endl;
    }
};

int main()
{

    std::cout << "______________________________" << std::endl << std::endl;

    CSE s1;
    s1.get_data("Abhishek Das", 01, 01, 2001, 1234, 18);
    s1.get_marks(11, 12, 13);
    s1.display_details();
    s1.display_marks();

    std::cout << "______________________________" << std::endl << std::endl;

    IT s2;
    s2.get_data("Aditya", 02, 02, 2002, 2345, 18);
    s2.get_marks(21, 22, 23);
    s2.display_details();
    s2.display_marks();

    
    std::cout << "______________________________" << std::endl << std::endl;
    
    ECE s3;
    s3.get_data("Rahul", 03, 03, 2003, 3456, 18);
    s3.get_marks(31, 32, 33);
    s3.display_details();
    s3.display_marks();

    
    std::cout << "______________________________" << std::endl << std::endl;

    return 0;
}
