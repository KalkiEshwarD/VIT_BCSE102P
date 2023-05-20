#include <iostream>
#include <string>

class Customer {
    protected:
        string Name;
        unsigned int Phone_Number;

    void getdata()
    {
        std::cout << "Enter Name: ";
        std::cin >> Name;
        std::cout << "Enter Account Number: ";
        std::cin >> Phone_Number;
        // std:: 
    }

    Customer(string name, unsigned int ph_no)
    {
        getdata();
        Name = name;
        Phone_Number = ph_no;
    }
};

class Calls: {
    public:
        int total_calls;
        float unit_price = 0.50;
        
    void getcalls(int total_calls)
    {
        this->total_calls = total_calls;
    }
};

class Bill: public Customer, public: Calls {
    public:
        float calculate()
        {
           float price = unit_price * total_calls;
           float stax = 0.12 * price;
           float vat = 0.14 * price;
           return price + stax + vat;
        }
};

int main()
{
    return 0;
}
