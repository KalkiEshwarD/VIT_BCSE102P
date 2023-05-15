// void getdata(int s1,int s2,int s3,int s4,int s5) & 
// void display( ) 
// then should pass value from main as like
// void getdata(75,85,96,75,88); 
// void display( ); //display function will print tot & avg.

#include <iostream>

class Student
{
    public:
        int mark_1;
        int mark_2;
        int mark_3;
        int mark_4;
        int mark_5;
        int total;

        Student(int mark_1, int mark_2, int mark_3, int mark_4, int mark_5)
        {
            this->mark_1 = mark_1;
            this->mark_2 = mark_2;
            this->mark_3 = mark_3;
            this->mark_4 = mark_4;
            this->mark_5 = mark_5;
        }

        int get_total()
        {
            int total = mark_1 + mark_2 + mark_3 + mark_4 + mark_5;

            return total;
        }

        int get_average() 
        {
            int average = get_total() / 5;
            
            return average; 
        }
};

int main()
{
    Student s1(1, 1, 1, 1, 1);
    Student s2(2, 2, 2, 2, 2);
    Student s3(3, 3, 3, 3, 3);
    Student s4(4, 4, 4, 4, 4);
    Student s5(5, 5, 5, 5, 5);

    std::cout << "Total: " << s1.get_total() << std::endl;
    std::cout << "Average: " << s1.get_average() << std::endl;
    
    return 0;
}
