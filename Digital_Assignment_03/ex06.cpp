#include <iostream>

class Circle
{
    public:
        float radius;
        const float pi = 3.14159;

    inline float area_circle(float radius)
    {
        this->radius = radius;
        float area = pi * radius * radius;
        std::cout << "Area: " << area << std::endl;
        return area;
    }

};


int main()
{
    Circle c1;
    c1.area_circle(1);
    
    Circle c2;
    c2.area_circle(2);

    Circle c3;
    c3.area_circle(3);

    return 0;
}
