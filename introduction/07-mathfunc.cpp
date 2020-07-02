#include <iostream>
#include <cmath> //tells c++ program that we want to use math functions
#include <algorithm>
using namespace std;

int main()
{
    cout << pow(2, 5) << endl; //2^5 
    cout << sqrt(36) << endl; //square root
    cout << round(4.3) << endl; // normal rounding rule
    cout << round(4.6) << endl;
    cout << ceil(4.1) << endl; //rounds the number to the next highest number
    cout << floor(4.9) << endl; //rounds the number to the previous lowest number
    cout << fmax(3,10) << endl; // returns the bigger number, mainly for floating point, in cmath header
    cout << fmin(3,10) << endl;
    cout << max(3,10) << endl; // for any data type, in algorithm header
    cout << min(3,10) << endl;


    return 0;
}
