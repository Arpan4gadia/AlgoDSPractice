#include <iostream>
using namespace std;

int main()

{
    int the_number = 0;
    int guess = 0;
    int tries = 0;

    the_number = rand() % 101 + 1;

    cout << "Let's play a game!";
    cout << "I will think of a number 1-100. Try to guess it.";
    cout << endl;
    cin >> guess;

    for (tries = 0; tries++;)
    {
        if (guess == the_number) {
            cout << "You guessed it!";
            cout << "And it only took you: " << tries;
        }

        else if (guess < the_number) {
            cout << "Higher";
            tries++;
        }

        else if (guess > the_number) {
            cout << "Lower";
            tries++;
        }

        else {
            cout << "That's not even in range!";
            return 0;
        }
}
}