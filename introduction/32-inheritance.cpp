/* inheritance */

#include <iostream>
using namespace std;

class Chef{ //super class
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq chicken" << endl;
        }
};
//subclass
class ItalianChef: public Chef{ //italian chef should do what a normal chef could do : inheritance
 
    //can access all the public functions of Chef
    public:
        void makePasta(){
            cout << "The italian chef can make pasta" << endl;
    }
        void makeSpecialDish(){ //function overidding
            cout << "The italian chef makes chicken parm" << endl;
        } //overrode the original function
};

int main()
{
        Chef chef;
        chef.makeChicken();
        //chef.makePasta(); //chef cannot make pasta, as it is parent
        chef.makeSpecialDish();

        ItalianChef italianchef;
        italianchef.makeChicken();
        italianchef.makePasta();
        italianchef.makeSpecialDish(); 

    return 0;
}