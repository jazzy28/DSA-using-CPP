/* Data Type: type of data/information that we can use inside of our program*/

/*Type of commonly used datatypes: 
1. character: represents a single character, syntax: char grade = 'A';
2. string: plain text in our program or stores of string of characters
3. integer: whole numbers
4. float: real/decimal/floating point numbers
5. double: can store more decimal points than float
6. boolean: true or false value*/

//Syntax: datatype name; 


#include<iostream>
using namespace std;

int main()
{
    char grade = 'A';
    string phrase = "Hello World"; //more commonly used than char
    int age = 21; //can be negative too, but no decimal!
    double gpa = 3.7;
    bool isFemale = true; //can be assigned as false too

    cout << "abcdefg" <<endl; //string constant
    cout << false << endl; //constant

    return 0;
}