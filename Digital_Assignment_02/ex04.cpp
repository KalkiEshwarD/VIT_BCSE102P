// Including the packages that are necessary for the program to work.
#include <bits/stdc++.h>


// Creating a class called Employee to hold the value of salary and amount of work time.
using namespace std;
class Employee
{
    public:         // creating two public variables salary and hours
        int salary;
        float hours;

    // Defining the constructor funcition.
    Employee(int amount, float time)
    {
        salary = amount;
        hours = time;
    }

    // Defining the Add salary function to add $10 to the salary of employee if it falls less than $500
    int Addsal()
    {
        if (salary < 500) {
            salary += 10;
        }

        return salary;
    }

    // Defining the Add Work function to add $5 to the salary of the employee if he/she is working more than 6 hours a day.
    int AddWork()
    {
        if (hours > 6.0) {
            salary += 5;
        }

        return salary;
    }
};


// Issuing a few commands
int main(int argc, char *argv[])
{
    int s;
    float t;
    cout << "Enter salary of employee: ";
    cin >> s;
    cout << "Enter the work time of employee: ";
    cin >> t;
    Employee emp1(s, t);
    emp1.Addsal();
    emp1.AddWork();
    printf("The modified salary of the employee is: %d", emp1.salary);

    return 0;
}
