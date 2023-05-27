#include <iostream>
#include <string>

class Car
{
    public:
        std::string Make;
        std::string Model;
        int Year;
        float RentalPrice;        
    
    Car(std::string Make, std::string Model, int Year, float RentalPrice)
    {
        this->Make = Make;
        this->Model = Model;
        this->Year = Year;
        this->RentalPrice = RentalPrice;
    }

    void display()
    {
        std::cout << "Make: " << Make << std::endl;
        std::cout << "Model: " << Model << std::endl;
        std::cout << "Year: " << Year << std::endl;
        std::cout << "Rental Price: " << RentalPrice << std::endl;
    }
};

int main()
{
    Car c1("SUV", "TATA Nexon", 2018, 420);
    c1.display();
    
    return 0;
}
