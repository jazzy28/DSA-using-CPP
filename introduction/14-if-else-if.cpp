#include <iostream>
using namespace std;
// ! operator: negates the condition
int main()
{
    bool isFemale = false;//stores a true or a false value
    bool isTall = false;
    if(isFemale) // is its true, then inner code will be executed
    {
        cout << "You are a tall female" << endl;
    }
    else if (isFemale && !isTall)
    {
        cout << "You are a short female" << endl;
    }
    else if (!isFemale && isTall)
    {
        cout << "Your are tall but not female" << endl;
    }
    
    else //responding to a situation which says false
    {    
        cout << "You are not a female" << endl;
    }
    
    return 0;
}
