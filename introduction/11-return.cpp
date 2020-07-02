#include <iostream>
using namespace std;

double cube(double num)
{
    double result = num * num * num;
    return result; //return result back to the caller
    //can be return result * result * result;
    //cout << "Hello"; // does not get print, as return acts like break, therefore, it exits after its execution
}

int main() 
{
    double answer = cube(5.0);
    cout << answer << endl; // can be directly cout << cube(5.0);

    return 0;
}

//return : tells cpp code that we are done executing the code