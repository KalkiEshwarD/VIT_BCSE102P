#include <iostream>
#include <string>

class Employee
{
    public:
    std::string Name;
    std::string EmployeeID;
    std::string Designation;

    void get_details(std::string Name, std::string EmployeeID, std::string Designation)
    {
        this->Name = Name;
        this->EmployeeID = EmployeeID;
        this->Designation = Designation;
    }

    void put_details()
    {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Employee ID: " << EmployeeID << std::endl;
        std::cout << "Designation: " << Designation << std::endl;
    }
};

class Salary: private Employee
{
    public:
        float BasicPay;
        float HRA;
        float DA;
        float PF;

    void get_details(std::string Name, std::string EmployeeID, std::string Designation, float BasicPay, float HRA, float DA, float PF)
    {
        Employee::get_details(Name, EmployeeID, Designation);
        this->BasicPay = BasicPay;
        this->HRA = HRA;
        this->DA = DA;
        this->PF = PF;
    }

    void put_details()
    {
        Employee::put_details();
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

    void get_details(std::string Name, std::string EmployeeID, std::string Designation, float BasicPay, float HRA, float DA, float PF, std::string BankName, std::string AccountNumber)
    {
        Salary::get_details(Name, EmployeeID, Designation, BasicPay, HRA, DA, PF);
        this->BankName = BankName;
        this->AccountNumber = AccountNumber;
    }

    void put_details()
    {
        Salary::put_details();
        float net_pay = BasicPay + HRA + DA - PF;
        std::cout << "Net Pay: " << net_pay << std::endl;
        std::cout << "Bank Name: " << BankName << std::endl;
        std::cout << "Account Number: " << AccountNumber << std::endl;
    }
};

int main()
{
    Bank_Details b1;

    b1.get_details("Abhishek Das", "ID1234", "Product Lead", 123456, 12345, 12345, 12345,"State Bank of India", "1234567890");
    b1.put_details();

    return 0;
}
