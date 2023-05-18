// Mini Project on Library Management System

#include <iostream>
#include <cstring>
#include <string>

class Book
{
    public:
        void create_book(std::string bname, std::string bno, std::string aname)
        {
            strncpy(this->bname, bname.c_str(), 50);
            strncpy(this->bno, bno.c_str(), 6);
            strncpy(this->aname, aname.c_str(), 20);            
        }

        void show_book()
        {
            std::cout << "Book Name: " << bname << std::endl;
            std::cout << "Book Number: " << bno << std::endl;
            std::cout << "Author: " << aname << std::endl;
        }

        void modify_book(std::string bname, std::string bno, std::string aname)
        {
            strncpy(this->bname, bname.c_str(), 50);
            strncpy(this->bno, bno.c_str(), 6);
            strncpy(this->aname, aname.c_str(), 20);        
        }

        std::string bookretbno()
        {
            return bno;
        }

    private:
        char bno[7];
        char bname[50];
        char aname[20];
};

class Student
{
    public:
        void create_student(std::string Admno, std::string name, std::string stbno, int token)
        {
            strncpy(this->Admno, Admno.c_str(), 6);
            strncpy(this->name, name.c_str(), 20);            
            strncpy(this->stbno, stbno.c_str(), 6);
            this->token = token;
        }

        void show_student()
        {
            std::cout << "Student Name: " << name << std::endl;
            std::cout << "Admission Number: " << Admno << std::endl;
            std::cout << "Book Number: " << stbno << std::endl;
            std::cout << "Book Issued: " << token << std::endl;
        }

        void modify_student(std::string Admno, std::string name, std::string stbno, int token)
        {
            strncpy(this->Admno, Admno.c_str(), 6);
            strncpy(this->Admno, name.c_str(), 20);            
            strncpy(this->Admno, stbno.c_str(), 6);
            this->token = token;
        }

        std::string retadmno()
        {
            return Admno;
        }

        std::string retstbno()
        {
            return stbno;
        }

        void addtoken()
        {
            token = 1;
        }

        void resettoken()
        {
            token = 0;
        }

    private:
        char Admno[7];
        char name[21];
        char stbno[7];
        int token;
};

int main()
{
    Book b1;
    b1.create_book("Great Expectations", "1234", "Charles Dickens");
    b1.show_book(); 

    Student s1;
    s1.create_student("123", "Kalki Eshwar D", "1234", 1);
    s1.show_student();

    return 0;
}
