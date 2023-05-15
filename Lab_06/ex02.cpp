// 2. Develop a CPP Program to calculate total & average for 'N' number of students
#include <bits/stdc++.h>


class Student
{
    /*
        DESCRIPTION: Creating a class called students that is used to maintain the total and average of N students.
    */
    public:
        /*
            MEMBERS:
                DATA:
                    --{
                        string [reg_no],
                        string [name],
                        sub1 [integer],
                        sub2 [integer],
                        sub3 [integer],
                        sub4 [integer],
                        sub5 [integer],
                        total [integer],
                        average [float];
                    }
                FUNCITONS:
                    --{
                        tot(),
                        avg()
                    }
        */
        string reg_no;
        string name;
        int sub1;
        int sub2;
        int sub3;
        int sub4;
        int sub5;
        int total;
        float average;

    Student(string r_no, string stu_name, int m1, int m2, int m3, int m4, int m5)
    {
        reg_no = r_no;
        name = stu_name;
        sub1 = m1;
        sub2 = m2;
        sub3 = m3;
        sub4 = m4;
        sub5 = m5;
    }

    int tot()
    {
        total = sub1 + sub2 + sub3 + sub4 + sub5;
        return total;
    }

    float avg()
    {
        average = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
        return average;
    }
};

int main()
{
    Student s1("22BCE2123", "Kalki Eshwar D", 1, 2, 3, 4, 5);
    s1.avg();
    s1.tot();

    std::cout << s1.total << std::endl;
    std::cout << s1.average << std::endl;
    return 0;
}
