#include <iostream>
using namespace std;
//creating multiple constructors
class Book{
    public: 
        string title;
        string author;
        int pages;
        Book() // default
        { //giving the object some initial information if we don't pass anything in
            title = "no title";
            author = "no author";
            pages = 0;
        }
        Book(string aTitle, string aAuthor, int aPages) //parametrised
        {
            title = aTitle; 
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

    Book book3;
    cout << book3.title << endl;

    return 0;
}