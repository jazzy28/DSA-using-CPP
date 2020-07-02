/* Arrays: a container that can hold multiple data values (homogeneous and continuous)
stores elements in a list. Array start with index 0 by default*/
#include <iostream>
using namespace std;

int main()
{
    int luckyNums[] = {4, 8, 15, 16, 23, 42}; //initialization of an array

    cout << luckyNums[0] << endl;
    cout << luckyNums[2] << endl;

    luckyNums[0] = 19;
    cout << luckyNums[0] << endl; //arrays can get modified

    int lucky[20]; //storing 20 elements in cpp array
    lucky [0] = 100; //assigning values
    cout << lucky[0] << endl;

    return 0;
}