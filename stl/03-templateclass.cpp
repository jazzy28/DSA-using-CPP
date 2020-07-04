#include <iostream>
using namespace std;

template<typename T> 
T addition(T x, T y){ 
    return x + y;
}
// to define pair of 2 different datatypes or same of variables, we can creat a class
template<typename T, typename U> //will take 2 different datatypes
class Pair
{
public:
    T first; // variable 1 of type T
    U second; // variable 2 pf type U
    Pair(){}; //constructor
    Pair(T x, U y){ //variable of type T:  x and type U: y
    // user defined constructor
        first = x; 
        second = y;
    }
};


int main()
{
    Pair<int, string> p; //p is object. explicitly defining datatypes
    p.first = 10;
    p.second = "abc";
    cout << p.first << ", " << p.second << endl;

    //OR

    Pair<int, string> p2(100, "xyz");
    cout << p.first << ", " << p.second << endl;

    return 0;
}