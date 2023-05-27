#include <iostream>
#include <string>

class Employee
{
    public:
        std::string Name;
        std::string EmployeeID;
        std::string Designation;
        float SalaryAmount;

    void get_details(std::string Name, std::string EmployeeID, std::string Designation)
    {
        this->Name = Name;
        this->EmployeeID = EmployeeID;
        this->Designation = Designation;
    }
};

class Salary: private Employee
{
    public:
        float BasicPay;
        float HRA;
        float DA;
        float PF;

    void get_details(std::string EmployeeID, std::string Name, std::string Designation, float BasicPay, float HRA, float DA, float PF)
    {
        this->EmployeeID = EmployeeID;
        this->Name = Name;
        this->Designation = Designation;
        this->BasicPay = BasicPay;
        this->HRA = HRA;
        this->DA = DA;
        this->PF = PF;
    }

    void put_details()
    {
        std::cout << "Employee ID: " << EmployeeID << std::endl;
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Designation: " << Designation << std::endl;
        std::cout << "Basic Pay: " << BasicPay << std::endl;
        std::cout << "HRA: " << HRA << std::endl;
        std::cout << "DA: " << DA << std::endl;
        std::cout << "PF: " << PF << std::endl;
    }
};

class Bank_Details: private Salary
{
    public:
        std::string BankName;
        std::string AccountNumber;
    
    void put_details()
    {
        std::cout << "Employee ID: " << EmployeeID << std::endl;
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Designation: " << Designation << std::endl;
        std::cout << "Basic Pay: " << Salary::BasicPay << std::endl;
        std::cout << "HRA: " << HRA << std::endl;
        std::cout << "DA: " << DA << std::endl;
        std::cout << "PF: " << PF << std::endl;
        std::cout << "Net Pay: " << BasicPay + DA + PF << std::endl;
        std::cout << "Account Number: " << AccountNumber << std::endl;
    }

    public:
};

int main()
{
    Bank_Details b1;
    b1.Salary::get_details("1234", "Abhishek Das", "Product Lead", 123456, 12345, 12345, 12345);
    return 0;
}
