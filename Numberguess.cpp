#include <iostream>
#include <cstdlib> // to generate random number
#include <ctime>   // to seed the random number generator with the current time.
using namespace std;

int main() {
    string name;
    cout << "Enter your Name: ";
    cin >> name;

    srand(static_cast<unsigned int>(time(NULL))); // srand is a function used to seed the random number generator.

    int number = (rand() % 100) + 1; // function defines a random integer // modulus operator gives the remainder

    int guess = 0;
    int attempt = 0;
    cout << "You have only 5 attempts:" << endl;

    while (attempt < 5) {
        cout << "Enter Guess (1-100): ";
        cin >> guess;
        attempt++;

        if (guess > number) {
            cout << "Guess lower" << endl;
        } else if (guess < number) {
            cout << "Guess higher" << endl;
        } else {
            cout << "You won!" << endl;
            break;
        }
    }

    if (attempt == 5) {
        cout << "Out of attempts. The Number was: " << number << endl;
    }

    return 0;
}