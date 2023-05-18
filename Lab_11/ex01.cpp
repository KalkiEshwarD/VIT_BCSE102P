#include <iostream>
#include <string>

class Savings_Account
{
    /*
        Creating a class named savings account that
    */
    public:
        std::string Account_holder_name;
        unsigned int Account_number;
        unsigned int Savings_balance;
    
    Savings_Account(std::string Account_holder_name, unsigned int Account_number, unsigned int Savings_balance)
    {
        this->Account_holder_name = Account_holder_name;
        this->Account_number = Account_number;
        this->Savings_balance = Savings_balance;
    }


    unsigned int deposit(unsigned int amount)
    {
        Savings_balance += amount;
        penalty();
        return Savings_balance;
    }

    unsigned int withdraw(unsigned int amount)
    {
        if (Savings_balance < amount) {
            penalty();
            return 0;
        } else {
            Savings_balance -= amount;
            penalty();
            return Savings_balance;
        }
    }

    int interest()
    {
        float interest = Savings_balance * 0.02;
        return interest;
    }

    int penalty()
    {
        if (Savings_balance < 500) {
            Savings_balance -= 20;
            return Savings_balance;
        } else {
            return 0;
        }
        
    }

    void show()
    {
        std::cout << "Account Information" << std::endl;
        std::cout << "Account Holder Name: " << Account_holder_name << std::endl;
        std::cout << "Account Number: " << Account_number << std::endl;
        std::cout << "Account Balance: " << Savings_balance << std::endl;
        std::cout << "Interest: " << interest() << std::endl;
        if (penalty() == 0) {
            std::cout << "No penalty imposed" << std::endl;
        } else {
            std::cout << "Penalty imposed" << std::endl;
        }
    }
};

int main()
{
    Savings_Account C1("Nani", 1001, 20000);
    C1.deposit(10000);
    C1.withdraw(1000);
    C1.show();

    return 0;
}
