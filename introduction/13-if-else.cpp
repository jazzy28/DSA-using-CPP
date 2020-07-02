#include <iostream>
using namespace std;
// && : both the conditions has to be true
// || : only one of the condition has to be true, not necessarily both
int main()
{
    bool isFemale = false;//stores a true or a false value
    bool isTall = true;
    
    if(isFemale && isTall) // is its true, then inner code will be executed
    {
        cout << "You are a tall female" << endl;
    }
    else //responding to a situation which says false
    {    
        cout << "You are not a female" << endl;
    }
    
    return 0;
}
