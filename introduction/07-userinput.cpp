#include <iostream>
using namespace std;

int main()
{
    int age; //initialize
    cout << "Enter your age: ";//prompting user to input
    cin >> age; 

    cout << "You are " << age << " years old" << endl;

    //char input
    char firstAlpha;
    cout << "Enter the initial of your name: ";
    cin >> firstAlpha;
    cout << "Initial of your name is: " << firstAlpha << endl;

    // string input
    string name;
    cout << "Enter your name: ";
    cin.ignore(); // flush the newline character out of the buffer in between.  it will stop reading immediately, because of that \n that was left hanging there in your previous operation
    getline(cin, name); //gets entire line of text, cin: cmd prompt, variable

    cout << "Hello " << name;

    return 0;
}