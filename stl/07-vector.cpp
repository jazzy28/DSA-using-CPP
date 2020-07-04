/* Vector: it is a dynamic array, where there is no need to define the size.
The size will be automatically drawn according to the requirement

INDEXED CONTAINER: we can use indexing here.
Memory provided to vector is contiguous memory.

Vector is a self growing container. If a vector is filled with 50% of its size,
then it will grow to double the size of its container, automatically.*/

#include <iostream>
#include <algorithm> 
#include <vector> //vector comes under this header
using namespace std;

int main()
{
    //Acts like queue
    //push back take O(1) time
    vector<int> v; //{}

    //Way 1 to insert elements
    v.push_back(1); //inserting element of value 1; {1}
    v.push_back(2); //value of element is 2; {1,2}
    v.push_back(3); //elements are getting inserted at the end of the vector; {1,2,3}

    //Way 2 to insert elements
    //emplace_back: behaves as push back function
    v.emplace_back(4); //{1,2,3,4}

    //printing vector with the help of for each loop
    for(auto i : v){
        cout << i << ", " ;
    } cout << endl;

    //vector of type pair
    vector<pair<int, string> >v2; //dynamic pair
    v2.push_back(make_pair(1, "abc"));
    v2.push_back(make_pair(2, "def"));

    //How emplace is different from push back??
    v2.emplace_back(make_pair(3, "xyz"));
    v2.emplace_back(make_pair(4, "mno"));
    /*In emplace_back: the pair will be created at the vector directly. No copy will be created as such
    Time saving and efficient */

    v2.push_back(5, "pqr"); //error, if we write it after emplace_back()
    //push_back doesn't store the pair exactly, it creates a copy of pair inside the vector
    //basically address changes.

    for(auto i : v2){
        cout << i.first << ", " << i.second << endl;
    }
    cout << endl;
    /* o/p:
    1, 2, 3, 4,                                                                                                                            
    1, abc                                                                                                                                 
    2, def  
    */ 


    //OTHER FUNCTIONS OF VECTOR

    vector<int> v3(5,200); //size = 5, value = 200; 200 will be printed 5 times
    //if we want to access and change a value at a particular index
    v3[0] = 500;
    v3[1] = 600;

     for(auto i : v3){
        cout << i << ", " ;
    } cout << endl; // o/p: 500, 600, 200, 200, 200,             

    //Erase an element       
    v3.erase(v3.begin()); //remove the first element          
    for(auto i : v3){
        cout << i << ", " ;
    } cout << endl; //o/p:  600, 200, 200, 200,

    //Erase multiple elements  
    //To remove 600 and 200
    v3.erase(v3.begin() + 1, v3.begin() + 3); // specifying the actual deletion range v.erase(start, end-1)



    return 0;
}
                                                                                                                              
        