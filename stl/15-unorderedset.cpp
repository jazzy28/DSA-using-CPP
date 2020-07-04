#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> us;
    us.insert(10);
    us.insert(1);
    us.insert(5);
    us.insert(3);
    us.insert(7);

    for(auto it : us){
        cout << it << ", ";
    } cout << endl; // o/p: 7, 5, 3, 10, 1, - random order 

//finding an element
    auto(it1 = us.find(7);
        if(it1 != us.end()){
            cout <<" element found" << endl;
        }
        else{
            cout << "element not found" << endl;
        }
    

    return 0;
}

//Time complexity of erasing and inserting : O(1)
//Time complexity of finding an element : O(n) in unordered set
//Incase of ordered set, time complexity of finding is : logn

//Unordered set: more efficient than ordered set and multiset, as we are using hashing