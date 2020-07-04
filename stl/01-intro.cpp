/* STL: Standard Template Library or stl is a subset of standard 
library of C++*/

#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}
//to concatenate two strings
string concatenate(string x, string y)
{
    return x + y;
}

int main()
{
    // add 2 int
    int a = 10;
    int b = 20;
    cout << add(a, b) << endl;

    //add 2 strings
    string a1 = "abc";
    string b1 = "def";
    cout << concatenate(a1 ,b1) << endl;

    //add 2 float
    float a2  = 10.0;
    float b2 = 20.0;

    cout << add(a2, b2) << endl;
    return 0;
}
/* Template: as we have seen that for addtion or concatenation of different data types,
we had to add them by creating different functions.

But, with the help of Template, we can create a Template of addition function */