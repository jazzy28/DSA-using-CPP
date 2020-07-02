//Another way of declaring and using functions
#include <iostream>
using namespace std;

void sayHi(string name, int age); //declaring the function


int main() //function
{
    cout << "Top" << endl;
    sayHi("Jasmine", 21); //calling the function
    sayHi("Khushboo", 13);
    cout << "Bottom" << endl;

    return 0;
}
void sayHi(string name, int age) //declaring the function
{
    cout << "Hello " << name << " you are " << age << endl;
}