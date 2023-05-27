#include <iostream>
#include <string>

class BankAccount
{
    public:
        std::string Name;
        std::string AccountNumber;
        float Balance;
    
    void get_details(std::string Name, std::string AccountNumber, float Balance)
    {
        this->Name = Name;
        this->AccountNumber = AccountNumber;
        this->Balance = Balance;
    }

    void put_details()
    {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Account Number: " << AccountNumber << std::endl;
        std::cout << "Balance: " << Balance << std::endl;
    }
};

class SavingsAccount: public BankAccount
{
    public:
        float InterestRate;

    void get_details(float InterestRate)
    {
        this->InterestRate = InterestRate;
    }

    void put_details()
    {
        std::cout << "Interest Rate: " << InterestRate << "%"<< std::endl;
    }
};

int main()
{
    SavingsAccount sa1;
    sa1.BankAccount::get_details("Abishek Das", "1234", 1234);
    sa1.get_details(3.0);
    sa1.BankAccount::put_details();
    sa1.put_details();

    return 0;
}
