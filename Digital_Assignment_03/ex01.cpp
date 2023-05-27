#include <iostream>
#include <string>


class Student
{
    public:
        std::string id;
        std::string name;

    void getstu(std::string name, std::string id)
    {
        this->id = id;
        this->name = name;
    }

    void putstu()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << id << std::endl;    
    }
};

class Marks: public Student
{
    public:
        float m1;
        float m2;
        float m3;

    void getmarks(float m1, float m2, float m3)
    {
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }

    void putmarks()
    {
        std::cout << "Marks 1: " << m1 << std::endl;
        std::cout << "Marks 2: " << m2 << std::endl;
        std::cout << "Marks 3: " << m3 << std::endl;
    }
};

class Result: public Marks
{
    public:
        float total;
        float average;
    
    void show()
    {
        this->total = m1 + m2 + m3;
        this->average = total / 3;
        std::cout << "Total: " << total << std::endl;
        std::cout << "Average: " << average << std::endl;
    }
};

int main()
{
    Result s1;
    s1.Student::getstu("Abhishek Das", "1234");
    s1.Marks::getmarks(42, 43, 44);
    s1.Student::putstu();
    s1.Marks::putmarks();
    s1.show();

    return 0;
}
