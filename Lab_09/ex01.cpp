/*
  1. write a cpp program for finding total & avg for single students. (Note: create class & declare variable s1,s2,s3,s4,s5,tot,avg;
  & create two member function 
  void getdata(int s1,int s2,int s3,int s4,int s5) & 
  void display( ) 
  then should pass value from main as like
  void getdata(75,85,96,75,88); 
  void display( ); //display function will print tot & avg.
*/

#include <iostream>
using namespace std;

class Student {
public:
    int s1, s2, s3, s4, s5;
    int tot;
    float avg;

    void getdata(int s1, int s2, int s3, int s4, int s5) {
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
        this->s4 = s4;
        this->s5 = s5;
    }

    void display() {
        tot = s1 + s2 + s3 + s4 + s5;
        avg = tot / 5.0;
        cout << "Total: " << tot << endl;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    Student student;
    student.getdata(75, 85, 96, 75, 88);
    student.display();
    return 0;
}
