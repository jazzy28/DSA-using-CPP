#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{ //vector in vector behaves as a 2d array
    vector<vector <int> > v;
    v.push_back({1, 2, 3, 4});
    v.push_back({11, 12, 13, 14});

    //to print
    for(auto i : v){
        for (auto j : i){
            cout << j << ", ";
        } cout << endl;
    }


    return 0;
}
/* o/p:
1, 2, 3, 4,                                                                                                                            
11, 12, 13, 14,   
*/