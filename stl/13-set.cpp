/* container:
1. sequential
2. with restrictions
3. with some modifications 

Containers with some modifications are: set, multiset, map, multimap, unordered set, unordered map
In containers with some modifications, the order of elements will be defined by the container.
Memory allocation in not contiguous.

1. Set: will store all the unique elements in sorted order. Set stores the elements in binary search tree form.
2. Multiset: we can store repitive elements too, in sorted order.
3. Map: will store key-value pair. It will store a key and for that key, it will store a value.
example: key: product, value: value of that product.
Map will store the key-value pairs in sorted order of keys and these keeys will be unique.
4. Multimap: will store the duplicate keys in sorted order.
5. Unordered Map: will store the keys in random order, will store the unique key-value pairs only.

Time Complexity : O(1) for all
*/

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    //inserted elements in unsorted order, but set will store them in sorted order
    s.insert(5);
    s.insert(1);
    s.insert(0);
    s.insert(2);
    //s.emplace(3); //same as insert
    for(auto i: s){ 
        cout << i << ", ";
    } cout << endl; // o/p: 0, 1, 2, 5

    //Erasing elements
    //Way 1: Directly writing the element
    s.erase(1);
    for(auto it: s){ //it or i is name of iterator
        cout << it << ", ";
    } cout << endl; // o/p: 0, 2, 5

    //Way 2: just find the location of element and return the iterator for that element
    auto it = s.find(1);
    s.erase(it);
    for(auto it: s){
        cout << it << ", ";
    } cout << endl;

    //if that element is not found
    auto(it1 = s.find(7);
    if( it1 != s.end()){
        cout << "number found" << endl;
    }
    else{
        cout << "number found" << endl;
    }

    //Time complexity: log(n) base 2; as BST will be implied to this set, as all elements are stored in sorted order

    return 0;
}