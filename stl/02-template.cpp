#include <iostream>
using namespace std;

//TEMPLATE: this function takes a dynamic data type, which user will provide at runtime.
template<typename T> //keyword: template; typename: to define datatype; T: signifies data type
T addition(T x, T y){ // arguments of type T, names x and y
    return x + y;
}

int main()
{
    int a = 10;
    int b = 20;

    string a1 = "abc";
    string b1 = "def";

    float a2  = 10.50;
    float b2 = 20.40;

    // with a single function, we can deal with all data types
    cout << addition(a, b) << endl;
    cout << addition(a1, b1) << endl;
    cout << addition<float>(a2, b2) << endl; //explicitly defining datatype(our choice)

    return 0;
}
/*In our STL, there are different standard templates for different algorithms, different containers,
and different iterators.*/