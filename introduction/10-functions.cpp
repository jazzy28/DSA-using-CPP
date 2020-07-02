/* Function: block of code that performs a specific task. Able to reuse the code throughout the program  */

#include <iostream>
using namespace std;

//syntanx: returntype functionName(parameter if any){ code }
void sayHi(string name, int age) //declaring the function, void: returning nothing
{
    cout << "Hello " << name << " you are " << age << endl;
}

int main() //function
{
    cout << "Top" << endl;
    sayHi("Jasmine", 21); //calling the function
    sayHi("Khushboo", 13);
    cout << "Bottom" << endl;

    return 0;
}

// can't create function below the main unless we have declared the function above the main

