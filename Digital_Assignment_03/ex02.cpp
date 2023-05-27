#include <iostream>
#include <string>

class Student
{
    public:
        std::string Name;
        std::string ID;
        int Age;
    
    void Getstu(std::string Name, std::string ID, int Age)
    {
        this->Name = Name;
        this->ID = ID;
        this->Age = Age;
    }

    void Putstu()
    {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "ID: " << ID << std::endl;
        std::cout << "Age: " << Age << std::endl;
    }
};

class UnderGraduate: public Student
{
    public:
        int UGCourses;

    void GetUGCourses(int UGCourses)
    {
        this->UGCourses = UGCourses;
    }

    void PutUGCourses()
    {
        std::cout << "Number of UG Courses: " << UGCourses << std::endl;
    } 

};

class PostGraduate: public Student
{
    public:
        int PGCourses;

    void GetPGCourses(int PGCourses)
    {
        this->PGCourses = PGCourses;
    }

    void PutPGCourses()
    {
        std::cout << "Number of PG Courses: " << PGCourses << std::endl;
    } 
};

int main()
{
    UnderGraduate s1;
    s1.Student::Getstu("Abhishek Das", "1234", 18);
    s1.GetUGCourses(10);
    s1.Student::Putstu();
    s1.PutUGCourses();

    PostGraduate s2;
    s2.Getstu("Atharv Das", "1234", 18);
    s2.GetPGCourses(10);
    s2.Student::Putstu();
    s2.PutPGCourses();

    return 0;
}
