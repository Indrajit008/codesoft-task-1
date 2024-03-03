#include <iostream>
#include <ctime>
#include <cstdlib>

int main() 
{
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;

    std::cout << "Guess a number between 1 and 100: ";
    while (true) 
    {
        std::cin >> guess;
        if (guess > number)
        {
            std::cout << "Too high! Try again (between 1 and 100): ";
        } 
        else if (guess < number) 
        {
            std::cout << "Too low! Try again (between 1 and 100): ";
        } 
        else 
        {
            std::cout << "Congratulations! You guessed the number.";
            break;
        }
    }

    return 0;
}
