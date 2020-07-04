/* Pair class/container in stl: it consits of 2 elements/objects
Syntax:  pair <data_type1, data_type2> Pair_name; */

#include <iostream>
#include <utility> //pair container is defined in this header.
#include <string>
using namespace std;

int main()
{
    //Way 1 to define pair:
    pair<int, int> p; //naming the pair as p
    p.first = 10; //giving values to the pair p
    p.second = 100;
    cout << p.first << ", " << p.second << endl;

    //Way 2 to define pair:
    pair<int, string> p2 (20, "xyz");
    cout << p2.first << ", " << p2.second << endl;

    //Way 3 to define pair:
    pair<int, string> p3;
    p3 = make_pair(30, "cat");
    cout << p3.first << ", " << p3.second << endl;


    //Creating array of pairs
    //Way 1
    pair<int, string> arr[10] = {make_pair(10, "abc"), make_pair(20, "def"), make_pair(30, "xyz")};
    //Way 2
    //pair<int, string> arr[10] = {{10, "abc"}, {20, "def"}, {30, "xyz"}};
    for(int i=0; i<3; i++){
        cout << arr[i].first << ", " << arr[i].second << endl; //0th index
    }
    

   //Defining pair of pair
    pair<int, pair<int, string> > p4; //don't write >> together, as compiler will treat it as right shift operator
    p4.first = 50;
    p4.second = make_pair(100, "mno");
    cout << p4.first << " --> " << p4.second.first << ", " << p4.second.second << endl;
    //p4.second.first = first element of second pair
    //p4.second.second = second element of second pair


    return 0;
}

//pair class is already defined in C++ library 