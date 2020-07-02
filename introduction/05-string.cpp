#include<iostream>
using namespace std;

//strings: plain text
//Functions: block of code that will performs a specific task
// giving information to the function is known as parenthesis
int main()
{
//endl: indicates end of line or "\n" too
cout << "Hello World\n";
cout << "Hey" << endl;

//storing string in a variable
string phrase = "Good Morning";
               //01234567891011
cout << phrase << endl;;

//Functions with string: string functions
cout << phrase.length() << endl;//length of string

//index of string or array starts from 0
cout << phrase[2] << endl; //to access a particular character in a string

phrase[0] = 'B'; //overwriting or easy modification
cout << phrase << endl;;

cout << phrase.find("Morning",0) << endl;//to check whether a specific character or string is present or not
//variable.find("string",index from where to you want to start);

//substring allows to take a particular part/ sub section
string phrases;
cout << phrase.substr(8, 3)<<endl;; // starting and stopping index
cout << phrase <endl<;

return 0;
}