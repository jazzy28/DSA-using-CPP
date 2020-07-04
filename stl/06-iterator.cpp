/*Iterators: are used to iterate over a container.
Type of the iterator should be same as the type of the container.
Points to the selected element of the array
Iterator is a pointer, therefore, there is a need to dereference
it. Hence, it is necessary to put '*' before the iterator name.
 */
#include <iostream>
#include <algorithm> 
#include <array> //array container is defined in this header
using namespace std;

int  main()
{
    int arr[10] = {1, 2, 3, 4}; //general array declaration
    array<int, 10>arr1 = {1, 2, 3, 4, 5, 6}; // stl array

    //Way 1
    for(int i = 0; i < 10; ++i){
        //cout << arr1[i] << ", ";
    } cout << endl;


    //Way 2
    //Define the type of iterator, should be same as the type of the container
    array<int, 10>:: iterator it1; //it1 is name of the iterator
    //traversing over the array
    //arr1.begin(): pointing to the address of first element of arr1
    //arr1.end(): pointing to the address just after the last element
    for(it1 = arr1.begin(); it1 != arr1.end() ; ++it1)
    {
        cout << *(it1) << ", "; //iterator is a pointer
    } cout << endl;


    //Way 3: SIMPLIFIED ITERATOR
    //auto: automatically takes the datatype of array/container
    for(auto it2 = arr1.begin(); it2 != arr1.end(); it2++)
    {
        cout << *(it2) << ", ";
    } cout << endl;

    //EASIEST
    //Way 4: for each loop- prints all the values of our container
    for(auto x: arr1){ //traverse x in arr1
    cout << x << ", "; 
    /*here x is not a pointer, it is a value. It defines the value
     of every element one by one*/
    } cout << endl;
    return 0;
}

/* USE OF ITERATOR ??
In arrays, we can access elements by using index. But, it is not true 
for all containers.
In that case, iterator is used. 
Example: linked list, where there is no contiguous memory location, we use iterators
and cannot use indexing.
*/