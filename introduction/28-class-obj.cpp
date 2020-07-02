/* OOPS
classes and objects: useful for real world enitites. example: there is no  data type for book
therefore, class can be seen as a data type. creates a blueprint of that object

class : specification /blueprint for a new data type
 */

#include <iostream>
using namespace std;

class Book // blueprint/template for Book datatype
{
    //attributes
    public: //scope
        string title;
        string author;
        int pages;
};

int main()
{
    Book book1; //object of Book is book1
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    // both of the books are using same Book template/class with various instances/objects
    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    Book book2;
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