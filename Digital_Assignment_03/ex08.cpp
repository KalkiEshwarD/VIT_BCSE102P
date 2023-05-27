#include <iostream>
#include <string>

class Book
{
    public:

    Book(std::string Title, std::string Author, std::string ISBN)
    {
        this->Title = Title;
        this->Author = Author;
        this->ISBN = ISBN;
    }

    friend void borrow(Book* b);
    friend void return_book(Book* b);


    void display()
    {
        std::cout << "Title: " << Title << std::endl;
        std::cout << "Author: " << Author << std::endl;
        std::cout << "ISBN: " << ISBN << std::endl;
        std::cout << "Borrowed: " << borrowed << std::endl;
        std::cout << std::endl;
    }

    private:
        std::string Title;
        std::string Author;
        std::string ISBN;
        bool borrowed = 0;

};


void borrow(Book* b)
{
    b->borrowed = 1;
}

void return_book(Book* b)
{
    b->borrowed = 0;
}

int main()
{
    Book b1("Great Expectationt", "Charles Dickens", "IND1234");
    b1.display();
    
    borrow(&b1);
    b1.display();
    
    return_book(&b1);
    b1.display();

    return 0;
}
