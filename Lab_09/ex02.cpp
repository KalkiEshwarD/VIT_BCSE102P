/*
  Develop a CPP program for static data member  
  (Note: create adata member in public part static int a; & assign the value zero to variable a
  create data member 
  void func1();
  {
  a++;
  }
  then create three object c1,c2,c3 & call this func1 using that objects. then print a value into main program.
*/

#include <iostream>
using namespace std;

class MyClass {
public:
    static int a;

    void func1() {
        a++;
    }
};

int MyClass::a = 0;

int main() {
    MyClass c1, c2, c3;
    c1.func1();
    c2.func1();
    c3.func1();
    cout << MyClass::a << endl;
    return 0;
}
