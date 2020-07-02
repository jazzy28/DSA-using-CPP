#include <iostream>
using namespace std;

int main()
{
    int numberGrid[3][2] = {
                            {1, 2}, 
                            {3, 4},
                            {5, 6}
                           };
    
    //access these elements
    for(int i = 0; i < 3; i++) // row = 3
    {
        for(int j = 0; j < 2; j++) // column = 2
        {
            cout << numberGrid[i][j];
        }
        cout << endl; //prints as a pair
    }

    return 0;
}