/*
In array, vector and list, the order of elements was as given by the user
All of these elements were getting stored in a sequential order.
Therefore, array, vector and list are called SEQUENTIAL CONTAINERS

Other containers are:
1. Stack : last in first out element (LIFO)
2. Queue : first in first out (FIFO)
In stack and queue, we can put some restrictions on the user.

In STACK, we can add and remove an element from the front index only.
And user can't iterate over all the elements of the stack.
Eg: stack of plates, we can add and remove plate at the top only

In QUEUE, we can remove an element from the front, but we can add an element at the end only
Eg: queues in the banks

THERE IS NO OPTION TO ITERATE OVER ALL THE ELEMENTS OF STACK AND QUEUE.*/

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1); //pushed first, will be popped out last
    st.push(2);
    st.push(3);
    st.push(4); //pushed last, will be popped out first
    //st.emplace(4); //also works same as push here

    //to print what is at the top
    cout << st.top() << endl;

    //to remove the element from the top
    st.pop();
    //use the operation again and again to see what are the elements at the top
    cout << st.top() << endl;
    st.pop();

    cout << st.top() << endl;
    st.pop();

    cout << st.top() << endl;
    st.pop();

    //OTHER FUNCTIONS

    //size of a container 
    cout << st.size() << endl; //applicable for all kinds of containers; 0

    //check if a container is empty or not
    cout << st.empty() << endl; //1 , as stack is empty

    //swapping funtion: access st1 stack with st name and vice versa
    stack<int> st1;
    st1.push (10);
    st1.push(11);
    cout << st1.empty() << endl; //0, stack is not empty 

    st1.swap(st);

    cout << st1.top() << endl; //segmentation fault: as we have swapped st and st1, and st was empty before

    return 0;
}