// Inluding the cpp standard library for the program to work.
#include <bits/stdc++.h>

// Creating a class AddDistance to contain distance objects
using namespace std;
class Distance
{
    // Creating public attributes feet and inch.
    public:
        float feet;
        float inch;

    // Defining the constructor function which takes in and stores the feet and inches.
    Distance(float input_feet, float input_inch)
    {
        feet = input_feet;
        inch = input_inch;
    }

    // creating a static method which will add and do the necessary conversion and returns the output as a Distance object.
    static Distance add_distance(Distance dist1, Distance dist2)
    {
        float total_feet = dist1.feet + dist2.feet;
        float total_inch = dist1.inch + dist2.inch;

        if (total_inch > 12)
        {
            total_feet += ((int)total_inch / 12);
            total_inch = ((float)total_inch - ((int)total_inch / 12) * 12.0);
        }

        return Distance(total_feet, total_inch);
    }

    // Defining a static method which will display the feet and the inches of the given distance object.
    static void display(Distance dist)
    {
        cout << "Total Feet: " << dist.feet << "   Total Inches: " << dist.inch << endl;
    }

};

// Issuing a few commands.
int main(int argc, char *argv[])
{
    float f1, f2;
    float i1, i2;
    cout >> "Enter distance 1 feet: ";
    cin << f1;
    cout >> "Enter distance 1 inches: ";
    cin << i1;

    Distance dist1(cin >> "Enter feet: ";, cin >> "Enter inches: ";);
    Distance dist2(12, 11);
    Distance dist3 = Distance::add_distance(dist1, dist2);
    Distance::display(dist3);

    return 0;
}
