#include <iostream>
#include <string>


class Consumer
{
    public:
        void welcome() 
        {
            std::cout << "Welcome" << std::endl;        
        }

        void get_data()
        {
            std::cout << "Enter Name: ";
            std::getline(std::cin >> std::ws, Name);
            std::cout << "Enter Phone Number: ";
            std::getline(std::cin >> std::ws, Customer_number);
            std::cout << "Enter Address: ";
            std::getline(std::cin >> std::ws, Address);
        }

        void put_data()
        {
            std::cout << "Name: " << Name << std::endl;
            std::cout << "Phone Number: " << Customer_number << std::endl;
            std::cout << "Address: " << Address << std::endl;
        }

    protected:
        std::string Customer_number;
        std::string Name;
        std::string Address; 
};


class Meter
{
    public:
        void input()
        {
            std::cout << "Enter start meter reading: ";
            std::cin >> start_meter_reading;
            std::cout << "Enter last meter reading: ";
            std::cin >> last_meter_reading;
        }

        void display()
        {
            std::cout << "Start Meter Reading: " << start_meter_reading << std::endl;
            std::cout << "Last Meter Reading: " << last_meter_reading << std::endl;
            std::cout << "Total units consumed: " << last_meter_reading - start_meter_reading << std::endl;
        }

    protected:
        unsigned int start_meter_reading;
        unsigned int last_meter_reading;
        
    
};  

class Electricity_bill: public Consumer, public Meter 
{
    public:
        unsigned int e_bill()
        {
            unsigned int units = last_meter_reading - start_meter_reading;
            if (units > 200) {
                bill = (units - 200) * 4.10;
                units -= 200; 
            }
            if (units > 100) {
                bill = (units - 100) * 3.10;
                units -= 100;
            } 
            if (units > 0) {
                bill = units * 2.84;
                units = 0;
            }

            std::cout << "Bill: " << bill << std::endl; 
            return bill;
        }

    protected:
        unsigned int bill = 0;
};

int main()
{
    class Electricity_bill C1;
    C1.Consumer::welcome();
    C1.Consumer::get_data();
    C1.Meter::input();
    C1.Consumer::put_data();
    C1.Meter::display();
    C1.Electricity_bill::e_bill();

    return 0;
}

