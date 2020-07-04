/*Array container: The array is a container for constant size 
arrays. This container wraps around fixed size arrays and also doesn’t loose the information of its length when decayed to a pointer.
syntax: array<data_type, size_of_array> Array_name */

#include <iostream>
#include <array> //array container is defined in this header
using namespace std;

int  main()
{
    int arr[10] = {1, 2, 3, 4}; //general array declaration
    array<int, 10>arr1 = {1, 2, 3, 4, 5, 6}; // stl array
    for(int i = 0; i < 10; ++i){
        cout << arr1[i] << ", ";
    } cout << endl;

    return 0;
}
