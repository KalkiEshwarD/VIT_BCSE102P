/*
  Develop a CPP program for static data member & member function
  Note:
  create adata member in public part static int a; & 
  assign the value zero to variable a
  create data function like
  static void func1();
  {
  a++;
  }
  then call this func1 without using objects.
  then print a value into main program.
*/

#include <iostream>
using namespace std;

class MyClass {
public:
    static int a;

    static void func1() {
        a++;
    }
};

int MyClass::a = 0;

int main() {
    MyClass::func1();
    cout << MyClass::a << endl;
    return 0;
}
