#include <iostream>
using namespace std;

int main()
{
    string color, pluralNoun, celebrity;

    cout << "Enter a color: ";
    //cin.ignore();
    getline(cin,color);
    cout << "Enter a plural noun: ";
    //cin.ignore();
    getline(cin,pluralNoun);
    cout << "Enter a celebrity: ";
    //cin.ignore();
    getline(cin,celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}