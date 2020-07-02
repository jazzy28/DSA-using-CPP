/* Variable: a container where we can store diff pieces of information.
It becomes easy to manage, update and maintain data, saves space and can be 
changed.*/

//";" tells C/C++ that we are done with that particular line of code

//Syntax: datatype name; 

#include<iostream>
using namespace std;

int main() 
{
    string characterName = "Jasmine"; //value got stored inside characterName string variable
    int characterAge; //initialization
    characterAge = 21; //declaration

    cout << "There once was a woman named " << characterName <<endl;
    cout << "She was " << characterAge << " years old " << endl;

    //easy updation of values
    characterName = "Jenny";
    cout << "She liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

    return 0;
}