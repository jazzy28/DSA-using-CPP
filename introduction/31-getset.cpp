#include <iostream>
using namespace std;
/* getter and setter: allows you to control access to different attributes and elements inside the class 

example here, user can enter the valid movie ratings only, tring to restrict the values*/
class Movie{
    //by default its private: code inside the movie class can access the rating
    string rating;

    public:
    string title;
    string director;
    //string rating;
    Movie (string aTitle, string aDirector, string aRating){ //constructor
        title = aTitle; //assigning value to object
        director = aDirector;
        setRating(aRating); // will go through setRating function
    }

    void setRating( string aRating){
        rating = aRating;
        if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R"|| aRating == "NR"){
            rating = aRating;
        }
        else{
            rating  = "NR";
        }
    }
    string getRating(){
        return rating;
    }
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    //general movie ratings: G, PG, PG-13, R , NR

    avengers.setRating("G"); // as rating is private

    cout << avengers.getRating() << endl;
    return 0;

}