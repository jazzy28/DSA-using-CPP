/* Queue : add an element at back and remove from front */
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

int main()
{
    queue<pair<int, string> > q;
    //add at the back
    q.push(make_pair(1, "abc")); 
    q.push(make_pair(2, "def"));
    q.push(make_pair(3, "ghi"));

    cout << q.front().first << ", " << q.front().second << endl; //to see the element at the front of the queue
    //remove from front
    q.pop();

    cout << q.front().first << ", " << q.front().second << endl;
    q.pop();

    cout << q.front().first << ", " << q.front().second << endl;
    q.pop();

    //OTHER FUNCTIONS ARE SAME AS STACK
    

    return 0;
}