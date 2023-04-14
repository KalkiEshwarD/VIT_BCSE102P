// Including the standard cpp package for the program to work.
#include <bits/stdc++.h>

// creating a class named Volume and giving it a few public attributes, all of type integer.
using namespace std;
class Volume
{
    public:
    int length, breadth, height;
    int vol;

    Volume(int l, int b, int h)
    // This constructor will be used to take in and store the value of the length breadth and height of the box and also calculate and store the value of the volume.
    {
        length = l;
        breadth = b;
        height = h;
        vol = length * breadth * height;
    }
};

// Taking inputs of length breadth and height of the box and using the Volume class to compute the volume.
int main(int argc, char *argv[]) {
    int l, b, h;
    cout << "Enter length of box: ";
    cin >> l;
    cout << "Enter breadth of box: ";
    cin >> b;
    cout << "Enter height of box: ";
    cin >> h;
    Volume box1(l, b, h);
    cout << "The volume is: " <<box1.vol << endl;

    return 0;
}
