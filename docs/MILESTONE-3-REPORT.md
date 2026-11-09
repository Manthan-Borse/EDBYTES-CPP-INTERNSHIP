# Milestone 3: Three-Mark Grade Calculator

## What it does

The program reads three marks, accepts values from 0 through 100 (including
decimal marks), calculates their average using floating-point division, and
assigns a letter grade from the average. Invalid text and out-of-range values
are rejected and the program asks for that mark again.

## Grade thresholds

| Average | Grade |
|---|---|
| 80 or higher | A |
| 65 to less than 80 | B |
| 50 to less than 65 | C |
| 40 to less than 50 | D |
| Less than 40 | F |

These are the exercise thresholds supplied in the starter pack, not EdBytes
review grades.

## Build and run

From the project root:

```bash
g++ -std=c++17 -Wall -Wextra src/grade_calculator.cpp -o grade_calculator
./grade_calculator
```

On Windows, run `grade_calculator.exe` after compiling with an `.exe` output
name.

## Sample outputs

### Ordinary case: 75, 85, 90

```text
Three-Mark Grade Calculator
Enter three marks from 0 to 100.
Mark 1: 75
Mark 2: 85
Mark 3: 90
Average: 83.33
Grade: A
```

### All-zero boundary: 0, 0, 0

```text
Three-Mark Grade Calculator
Enter three marks from 0 to 100.
Mark 1: 0
Mark 2: 0
Mark 3: 0
Average: 0.00
Grade: F
```

### All-100 boundary: 100, 100, 100

```text
Three-Mark Grade Calculator
Enter three marks from 0 to 100.
Mark 1: 100
Mark 2: 100
Mark 3: 100
Average: 100.00
Grade: A
```

### Invalid input: text, then 55, 65, 75

```text
Three-Mark Grade Calculator
Enter three marks from 0 to 100.
Mark 1: hello
Invalid input. Enter one number from 0 to 100.
Mark 1: 55
Mark 2: 65
Mark 3: 75
Average: 65.00
Grade: B
```

An out-of-range value such as `101` is also rejected and the same mark is
requested again.

## Implementation notes

Each input line is parsed as one complete number, then checked for finiteness
and the inclusive 0–100 range. Only after three valid marks are entered does
the program calculate `(mark1 + mark2 + mark3) / 3.0`; using `3.0` keeps the
division floating-point. The thresholds are checked from highest to lowest.
