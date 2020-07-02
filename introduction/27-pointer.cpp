/* Pointer: basically memory address, container that can store a pointer*/
#include <iostream>
using namespace std;

int main()
{
    int age = 21; // 21 is stored inside the computer memory and that has an address
    double gpa = 3.7;
    string name = "Jasmine";

    //access physical memory address - &
    cout << "Age: " << &age << endl; //memory address where age variable and address is stored
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl; //ouput is the pointer

    //create a variable to store pointer
    int *pAge = &age; //storing memory address
    double *pGpa = &gpa; //data type of pointer is same as the variable its pointing to

    cout << pAge << endl; //memory address
    cout << pGpa << endl;

     //dereferencing of pointer: grabing the value inside the memory address
    //instead of using actual pointer, we want to directly grab the value and use it
    cout << *pAge << endl; //value
    cout << *&gpa << endl; //dereferencing the pointer
    cout << &*&gpa << endl; //address
    return 0;
}
