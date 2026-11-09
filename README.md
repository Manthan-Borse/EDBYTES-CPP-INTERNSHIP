# EdBytes Milestone 2 - Number Guessing Game

This project is a simple C++ console game where the player tries to guess a fixed target number. The game gives feedback after each valid guess and tracks the total number of accepted attempts until the correct value is found.

## Features
- Fixed target number: 42
- Guessing range restricted to 1-100
- Clear feedback for too high, too low, and correct guesses
- Invalid input detection and recovery
- Attempt counter for valid guesses only
- Simple, beginner-friendly C++ implementation

## Project Structure
- `src/main.cpp` - Contains the game logic
- `docs/TESTING.md` - Validation and test results
- `.gitignore` - Ignores generated build artifacts

## Compilation
From the project root, run:

```bash
g++ -std=c++17 -Wall -Wextra src/main.cpp -o guessing_game.exe
```

## Execution
```bash
./guessing_game.exe
```

## Sample Output
```text
Welcome to the Number Guessing Game!
Guess a number between 1 and 100.
Enter your guess: 20
Too Low!
Enter your guess: 60
Too High!
Enter your guess: 42
Correct!
Total attempts: 3
```

## Implementation Explanation
The program uses a `while` loop to continue prompting the user until the fixed target is guessed. Each input is checked to ensure it is a valid integer within the allowed range. Invalid input such as letters or out-of-range numbers is rejected without increasing the attempt count. When the correct number is entered, the game displays a success message and the total accepted attempts.

## Learning Outcomes
This project helps reinforce:
- C++ input and output
- Conditional logic with `if`, `else if`, and `else`
- Loop-based program flow
- Input validation and error handling
- Variables and counters in a practical game

## Testing Summary
The program was compiled and run using the required command. Manual test cases were executed against the fixed target number to confirm the expected gameplay and validation behavior.
