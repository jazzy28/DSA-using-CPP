/* List: doesn't contain a contiguous memory space. Different elements can be
stored at different memory locations. 
In list, we can add and remove the elements at front and back both. 
List in stl is linked list data structure.
List: push_back and push_front- time complexity : O(1)

Therefore, we can't use the indexing to iterate over the list, and hence, we need
to use the iterator to iterate over our list.

Vector and array contains a contiguous memory space. 

Vector: elements can be added at the end only
*/
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    list<int> ls; //defining the list
    ls.push_back(10);
    ls.emplace_back(20);

    //printing the list
    for(auto i : ls){
        cout << i << ", ";
    } cout<< endl; // o/p : 10, 20,         

    //adding elements at front and back                                                                                                                       
    ls.push_front(15); //front
    ls.emplace_front(25); //front
    for(auto i : ls){
        cout << i << ", ";
    } cout<< endl; // o/p: 25, 15, 10, 20,  


    return 0;
}
//begin and end functions of vectors are same in list too!

//Most common example of list: Singly Linked List