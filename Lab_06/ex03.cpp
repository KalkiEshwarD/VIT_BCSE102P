// 3. Develop a CPP Program to find out the top rank student from the group of students.
#include <bits/stdc++.h>

using namespace std;

class Students
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
                        disp(),
                        tot(),
                        avg(),
                        topper(Students *student_array, int n)
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

    Students() {}

    Students(string r_no, string stu_name, int m1, int m2, int m3, int m4, int m5)
    {
        reg_no = r_no;
        name = stu_name;
        sub1 = m1;
        sub2 = m2;
        sub3 = m3;
        sub4 = m4;
        sub5 = m5;
    }

    void display()
    {
        cout << "Reg_no: " << reg_no << endl;
        cout << "Name: " << name << endl;
        cout << "Total: " << tot() << endl;
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

    static int topper(Students *student_array, int n)
    {
        /*
            INPUT: --{student_array [class Students object pointer], n [integer]}--
            OUTPUT: --{0}-- [integer] Returns 0 if the process was completed successfully.

            DEPENDENCIES: Nil
            DESCRIPTION: This is a function that will display the topper among the students in the given array.
        */
        int max;
        int max_n;
        Students *max_students = new Students[n];

        max = student_array[0].tot();
        max_students[0] = student_array[0];
        max_n = 1;

        for (int i = 0; i < n; i++) {
            if (student_array[i].tot() > max) {
                delete[] max_students;
                max_students = new Students[n];
                max = student_array[i].tot();
                max_students[0] = student_array[i];
                max_n = 1;
            } else if (student_array[i].tot() == max) {
                max_students[max_n++] = student_array[i];
            }
        }
        
        for (int l = 0; l < max_n; l++) {
            max_students[l].display();
        }
        delete[] max_students;
        return 0; 
    }
};


int main()
{
    Students s1("122123", "Alice", 1, 2, 3, 4, 5);
    Students s2("234222", "Bob", 2, 3, 4, 5, 6);
    Students s3("234231", "Trudy", 3, 4, 5, 5, 6);


    Students stu_arr[3];
    stu_arr[0] = s1;
    stu_arr[1] = s2;
    stu_arr[2] = s3;

    Students::topper(stu_arr, 3);
    return 0;
}
