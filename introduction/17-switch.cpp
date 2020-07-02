/*Switch: special type of if statement which allows us to check one particular value against a bunch of values */

// number into a day of a week, 0 -> sunday
#include <iostream>
using namespace std;

string getDayOfWeek (int dayNum)
{
    string dayName;

    switch(dayNum)
    {
        case 0:
            dayName = "Sunday";
            break; //useful when checking for more than one condition

        case 1:
            dayName = "Monday";
            break;
        
        case 2:
            dayName = "Tuesday";
            break;
        
        case 3:
            dayName = "Wednesday";
            break;
        
        case 4:
            dayName = "Thursday";
            break;
        
        case 5:
            dayName = "Friday";
            break;
        
        case 6:
            dayName = "Saturday";
            break;

        default: //when user enters invalide value
            dayName = "Invalid Day Number";
    }
    return dayName;
}

int main()
{
    cout << getDayOfWeek(9) << endl;
    return 0;
}