/*While loop: programming structure that allows us to loop through a block of code while a certain condition is true */
#include <iostream>
using namespace std;

int main()
{
    int index = 1;
    while(index <= 5) 
    {
        cout << index << endl;
        index++; //adds 1 to index
    }

    return 0;
}

//infinite loop: where condition never becomes false. example: neither incrementing nor decrementing, value remains same, hence infinit