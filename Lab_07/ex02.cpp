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

class Calls: protected Customer {

};

class Bill: protected Customer {

};

int main()
{

}
