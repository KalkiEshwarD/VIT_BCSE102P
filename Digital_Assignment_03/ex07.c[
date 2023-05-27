#include <iostream>
#include <string>
#include <cstring>

class Person
{
    public:
        std::string Name;
        int Age;

    Person(std::string Name, int Age)
    {
        this->Name = Name;
        this->Age = Age;
    }
};

int test_function(std::string Name, int Age, Person p1)
{
    return p1.Name == Name;
}

int main()
{
    std::string Name = "Abhishek Das";
    int Age = 18;
    Person p1(Name, Age);

    int result = test_function(Name, Age, p1);

    if (result == 1) {
        std::cout << "Successful" << std::endl;
    } else {
        std::cout << "Failure" << std::endl;
    }

    return 0;
}
