/*basically two types of numbers are there:
1. Whole numbers: integers
2. Decimal numbers: float and double (larger precision)  */

/* types of operators: +, -, *, /, % */

/* precedence chart : https://doc.bccnsoft.com/docs/cppreference_en/operator_precedence.html */

#include<iostream>
using namespace std;

int main()
{
    cout << 5 + 7 << endl;
    cout << 5 - 7 << endl;
    cout << 5 * 7 << endl;
    cout << 5 / 7 << endl;
    cout << 5 % 7 << endl; // modulus operator gives the remainder
    cout << 4 + 5 * 10 << endl; //multiplication first, precedence
    cout << (4 +5) * 10 << endl; //addition first, as parenthesis hold higher precedence

    int wholeNum = 5;
    double decimalNum = 5.5;

    wholeNum++;
    cout << wholeNum << endl;

    decimalNum++;
    cout << decimalNum << endl;

    wholeNum += 80;
    cout << wholeNum << endl;

    cout << 5.5 + 9 << endl;
    cout << 10.0 / 3.0 << endl;

    return 0;
}