#include <iostream>

class Circle
{
    public:
        float radius;

        float area(float radius)
        {
            this->radius = radius;
            return 3.14 * radius * radius;
        }
};

class Rectangle
{
    public:
        float length;
        float breadth;

    float area(float length, float breadth)
    {
        this->length = length;
        this->breadth = breadth;
        return length * breadth;
    }
};

class Cylinder: public Circle, public Rectangle
{
    public:
        float area(float radius, float height)
        {
            return 2 * Circle::area(radius) + Rectangle::area(2 * 3.14 * radius, height);
        }

        float volume(float radius, float height)
        {
            return Circle::area(radius) * height;
        }
};

int main()
{
    Cylinder c1;
    std::cout << "AREA: " << c1.area(3, 1) << std::endl;
    std::cout << "VOLUME: " << c1.volume(3, 1) << std::endl;

    return 0;
}
