# Testing Documentation

## Environment
- Compiler: `g++.exe (MinGW.org GCC-6.3.0-1) 6.3.0`
- Command used: `g++ -std=c++17 -Wall -Wextra src/main.cpp -o guessing_game.exe`
- Execution command: `./guessing_game.exe`
- Result: Successful compilation and execution on the provided environment.

## Validation Results

| Test Case ID | Input | Expected behaviour | Actual behaviour | Result |
|---|---|---|---|---|
| TEST 1 | `20`, `60`, `42` | `20` shows Too Low!, `60` shows Too High!, `42` shows Correct!, final attempts = 3 | Program displayed Too Low!, Too High!, and Correct! with `Total attempts: 3` | PASS |
| TEST 2 | `hello`, `42` | Invalid input message appears, program continues, `42` shows Correct!, final attempts = 1 | Program printed the invalid input message, accepted `42`, and ended with `Total attempts: 1` | PASS |
| TEST 3 | `0`, `101`, `42` | `0` and `101` are rejected, `42` accepted, final attempts = 1 | Program rejected both out-of-range values and accepted `42` with `Total attempts: 1` | PASS |
| TEST 4 | `1`, `100` | Both values accepted as valid guesses; low/high hints appear; accepted guesses increase the counter | Program displayed Too Low! for `1` and Too High! for `100`, then exited safely at EOF without entering an infinite loop | PASS |
| TEST 5 | `20`, `20`, `42` | Both 20 guesses counted, correct guess ends the game, final attempts = 3 | Program displayed Too Low! twice, then Correct! with `Total attempts: 3` | PASS |

## Notes
The program was validated by running each case directly through the compiled executable with piped input. The code also handles EOF safely so that the game ends gracefully rather than looping indefinitely if input is closed unexpectedly.
