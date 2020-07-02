/* Constructor: special function inside a class that gets called whenever we create an object of a class.
Types of Comstructors:
1. Default constructor
2. Parameterized constructor
3. Copy constructor
object: instance of a class */
#include <iostream>
using namespace std;

class Book{
    public: 
        string title;
        string author;
        int pages;
        Book(){//constructor, same name as class with no return type
            cout << "Creating objects" << endl;
        }
        // Book(string name){ //parameterised constructor
        //     cout << name << endl;
        //}
};

int main()
{
    Book book1;
    //Book book1 ("Harry Potter"); //paramters call
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    
    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    Book book2;
    //Book book2 ("Lord of the Rings");
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    book2.title = "Hunger Games";
    cout << book2.title << endl;

    return 0;
}