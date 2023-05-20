#include <iostream>

class Semester1
{
    public:
        int mark1;
    
    void get_marks(int mark1)
    {   
        this->mark1 = mark1;
    }

    float cumulative_average()
    {
        return mark1;
    }
};


class Semester2: public Semester1
{
    public:
        int mark2;
    
    void get_marks(int mark2)
    {   
        this->mark2 = mark2;
    }


    float cumulative_average()
    {
        return (mark1 + mark2) / 2.0;
    }
};


class Semester3: public Semester2
{
    public:
        int mark3;

    void get_marks(int mark3)
    {   
        this->mark3 = mark3;
    }


    float cumulative_average()
    {
        return (mark1 + mark2 + mark3) / 3.0;
    }
};

int main()
{
    Semester3 s1;
    s1.Semester1::get_marks(10);
    s1.Semester2::get_marks(5);
    s1.Semester3::get_marks(5);
    
    std::cout << "Average: " << s1.cumulative_average() << std::endl;

    return 0;
}
