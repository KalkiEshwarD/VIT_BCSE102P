#include <iostream>
#include <string>

struct Account {
    std::string Account_Number;
    std::string Name;
    int Balance;
};

class SBI_Customers
{
    public:
        struct Account customer;

    SBI_Customers(std::string acc_no, std::string name, int balance)
    {
        customer.Account_Number = acc_no;
        customer.Name = name;
        customer.Balance = balance;
    }


    void getdata()
    {
        std::cout << "       Account Details" << std::endl;
        std::cout << "______________________________" << std::endl;
        std::cout << std::endl;
        std::cout << "Name: " << customer.Name << std:: endl;
        std::cout << "Account Number: " << customer.Account_Number << std::endl;
        std::cout << "Balance: " << customer.Balance << std::endl;
        std::cout << std::endl;
    }

    void display_function()
    {
        std::cout << "  Zero Balance Account Details" << std::endl;
        std::cout << "______________________________" << std::endl;
        std::cout << std::endl;
        std::cout << "Name: " << customer.Name << std::endl;
        std::cout << "Account Number: " << customer.Account_Number << std::endl;
        std::cout << "Balance: " << customer.Balance << std::endl;
        std::cout << std::endl;
    }   

};

int main()
{

    SBI_Customers c1("22BCE2123", "Kalki Eshwar D", 2123);
    c1.getdata();
    c1.display_function();

    return 0;
}
