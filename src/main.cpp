#include <iostream>
#include <string>

int main() {
    const int target = 42;
    int attempts = 0;
    int guess = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "Guess a number between 1 and 100.\n";

    while (true) {
        std::cout << "Enter your guess: ";

        if (!(std::cin >> guess)) {
            if (std::cin.eof()) {
                std::cout << "\nInput closed. Exiting the game.\n";
                return 0;
            }

            std::cin.clear();
            std::string invalidInput;
            std::getline(std::cin, invalidInput);
            std::cout << "Invalid input. Please enter a whole number between 1 and 100.\n";
            continue;
        }

        if (guess < 1 || guess > 100) {
            std::cout << "Out of range. Please enter a number between 1 and 100.\n";
            continue;
        }

        attempts++;

        if (guess > target) {
            std::cout << "Too High!\n";
        } else if (guess < target) {
            std::cout << "Too Low!\n";
        } else {
            std::cout << "Correct!\n";
            std::cout << "Total attempts: " << attempts << "\n";
            break;
        }
    }

    return 0;
}
