/* 2d array: an array where every single element inside the array is another array

Nested for loop: situation where a for loop is inside another for loop*/
#include <iostream>
using namespace std;

int main()
{
    int numberGrid[3][2] = {
                            {1, 2}, 
                            {3, 4},
                            {5, 6}
                           };
    
    //access these elements
    cout << numberGrid[0][1] << endl;
    cout << numberGrid[2][0] << endl;
    
    return 0;
}