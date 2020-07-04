/*Multiset: we can store duplicate keys*/
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(10);
    ms.insert(1);
    ms.insert(10);
    for(auto it : ms){
        cout << it << ", ";
    } cout << endl; // o/p: 1, 1, 10, 10,                                                                                                                          


    return 0;
}