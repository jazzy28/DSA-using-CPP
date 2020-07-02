#include <iostream>
using namespace std;
//pass the values of object into the constructors and the constructor can intialise the value for us
class Book{
    public: 
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages) //arguments
        {
            title = aTitle; //assigning values
            author = aAuthor;
            pages = aPages;
        }
};
        

int main()
{
    Book book1("Harry Potter", "JK Rowling", 500);

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;
    book1.title = "The boy who loved";
    cout << book1.title << endl;

    Book book2("Lord of the Rings", "Tolkein", 700);;
 

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    book2.title = "Hunger Games";
    cout << book2.title << endl;

    return 0;
}