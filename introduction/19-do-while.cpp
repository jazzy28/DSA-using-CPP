/* Do-while: executing the code, then checking the condition.
In while loop, atleast once it will get executed even if the condition is false*/
#include <iostream>
using namespace std;

int main()
{
    int index = 1;
    do{
        cout << index << endl;
        index++; 
    }while(index <= 5);


    return 0;
}
