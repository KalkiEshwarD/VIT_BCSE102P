#include <bits/stdc++.h>

class object
{
    /*
        DESCRIPTION: Creating a class of type object that will help us perform arithmetic operations.
    */
    public:
        /*
            Members: --{
                Data:
                    value [integer]
                Functions:
                    add(obj1, obj2)
                    sub(obj1, obj2)
                    multiply(obj1, obj2)
                    divide(obj1, obj2)
            }--
        */
        int value;

    object(int val)
    {
        value = val;
    }

    static int add(object obj1, object obj2)
    {
        return obj1.value + obj2.value;
    }

    static int sub(object obj1, object obj2)
    {
        return obj1.value - obj2.value;
    }

    static int multiply(object obj1, object obj2)
    {
        return obj1.value * obj2.value;
    }

    static float divide(object obj1, object obj2)
    {
        return obj1.value / obj2.value;
    }

};

int main()
{
    object a(5);
    object b(2);

    std::cout << object::add(a, b) << std::endl;
    std::cout << object::sub(a, b) << std::endl;
    std::cout << object::multiply(a, b) << std::endl;
    std::cout << object::divide(a, b) << std::endl;

    return 0;
}
