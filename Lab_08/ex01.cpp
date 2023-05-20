#include <iostream>

class Base
{
    public:
        int num1;
        int num2;
    
    void set_val(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
};

class Child: public Base
{
    public:
        int add(int x, int y);

    int add()
    {
        return num1 + num2;
    }

};

int main()
{
    Child c;
    c.Base::set_val(5, 4);
    int result = c.add();
    std::cout << "RESULT: " << result << std::endl;

    return 0;
}
