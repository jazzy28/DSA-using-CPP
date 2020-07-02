#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors()
        {
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }
};

int main()
{
 Student student1("Jasmine", "IT", 3.7);
 Student student2("Khushboo", "Business", 3.4);

 cout << student1.hasHonors() << endl;; //object function //true
 cout << student2.hasHonors() << endl; //false

    return 0;
}