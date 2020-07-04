/* Deque: we can add and remove an element at front as well as back.
 Structure seems to be like a structure, and each element acts like a pointer,
 pointing to another array like structure
 
 Deque does not have contiguous memory allocation, like vector
 As its memory management is in chunks
 
 Deque a little more inefficient than vector in case of accessing elements, still constant time*/

#include <iostream>
#include <algorithm>
#include <string>
#include <deque>

using namespace std;

int main() 
{
    deque<string> dq;

    dq.push_back("abc");
    dq.push_back("def");
    dq.push_front("xyz");
    dq.push_front("pqr");
    //dq.emplace_back("def"); //same as push_back
    //dq.emplace_front("xyz"); //same ad push_front

    //printing
    cout << dq.back() << endl;
    cout << dq.front() << endl;

    //iterating over deque
    for(auto i : dq){
        cout << i << ", ";
    } cout << endl; // o/p: pqr, xyz, abc, def

    return 0;
}
/* deque supports all the features of stacks and queues. 
begin and end function, clear, size, swap functions too! */