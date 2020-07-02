/* comparison operators:
1. >
2. >=
3. <
4. <=
5. ==
6. !=
 */
#include <iostream>
using namespace std;

int getMax(int num1, int num2)
{
    int result;
    if(num1 > num2) //boolean value : true or false
    {
        result = num1; //assignment operator
    }
    else
    {
        result = num2;
    }
    
    return result;
}
int main()
{
    cout << getMax(4,9) << endl;
    return 0;
}