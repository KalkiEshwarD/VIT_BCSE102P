// Including the basic cpp package for the program to work.
#include <bits/stdc++.h>

// Creating a class named employee to maintain data on the employees.
using namespace std;
class Employee
{
    public:
        string emp_name;        // using string type variable to store name of employee
        int year_of_joining;
        string address;         //using string type variable to store address of employee

    Employee(string name, int year, string addr)        // creating a constructor function to assign values to attributes to each of the class objects.
    {
        emp_name = name;
        year_of_joining = year;
        address = addr;
    }
};

int main(int argc, char *argv[])
{
    // Creating employee objects and giving them values
    Employee emp1("Robert       ", 1994, "          64C-WallsStreat");
    Employee emp2("Sam          ", 2000, "          68D-WallsStreat");
    Employee emp3("John         ", 1999, "          26B-WallsStreat");

    // Printing all the arributes in the specified manner
    cout << "Name       Year of Joining     Address" << endl;
    std::cout << emp1.emp_name << emp1.year_of_joining << emp1.address << endl;
    std::cout << emp2.emp_name << emp2.year_of_joining << emp2.address << endl;
    std::cout << emp3.emp_name << emp3.year_of_joining << emp3.address << endl;
 
    return 0;
}
