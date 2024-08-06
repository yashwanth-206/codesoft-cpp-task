#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(std::time(nullptr)));

    int randomNumber = rand() % 100 + 1;
    int guess = 0, miss = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have a random number between 1 and 100 in my mind" << endl;
    cout << "Can you guess it ? Let's see whether you can guess it correctly" << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < randomNumber)
        {
            if (randomNumber - guess <= 10)
            {
                cout << "Still a bit higher !! Try again." << endl;
            }
            else
            {
                cout << "Too low! Try again." << endl;
            }
            miss++;
        }
        else if (guess > randomNumber)
        {
            if (guess - randomNumber <= 10)
            {
                cout << "Still a bit lower !! Try again." << endl;
            }
            else
            {
                cout << "Too high! Try again." << endl;
            }
            miss++;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
            cout << "No of Attempts before guessing the correct Number: " << miss << endl;
            break;
        }
    }
}