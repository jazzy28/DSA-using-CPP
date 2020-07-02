#include <iostream>
using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0; //number of guesses
    int guessLimit = 3; //user gets 3 guesses
    bool outOfGuesses = false; //whether or not user have any guesses left?!

    while(secretNum != guess && !outOfGuesses)
    {
        if(guessCount < guessLimit)
        {
        cout << "Enter guess: " << endl;
        cin >> guess;
        guessCount ++;
        } 
        else
        {
            outOfGuesses = true;
        }
        
    }

    if(outOfGuesses)
    {
        cout << "You Lose!" << endl;
    }
    else
    {
        cout << "You Win!" << endl;
    }
    
    return 0;
}

// HOMEWORK: Write this code using do-while loop!