#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    double marks[3] = {};

    std::cout << "Three-Mark Grade Calculator\n";
    std::cout << "Enter three marks from 0 to 100.\n";

    for (int i = 0; i < 3; ++i) {
        while (true) {
            std::cout << "Mark " << (i + 1) << ": ";

            std::string line;
            if (!std::getline(std::cin, line)) {
                std::cerr << "\nInput ended before all three marks were entered.\n";
                return 1;
            }

            std::istringstream input(line);
            double mark = 0.0;
            std::string extra;
            if (!(input >> mark) || (input >> extra) || !std::isfinite(mark)) {
                std::cout << "Invalid input. Enter one number from 0 to 100.\n";
                continue;
            }

            if (mark < 0.0 || mark > 100.0) {
                std::cout << "Out of range. Enter a mark from 0 to 100.\n";
                continue;
            }

            marks[i] = mark;
            break;
        }
    }

    const double average = (marks[0] + marks[1] + marks[2]) / 3.0;
    char grade;
    if (average >= 80.0) {
        grade = 'A';
    } else if (average >= 65.0) {
        grade = 'B';
    } else if (average >= 50.0) {
        grade = 'C';
    } else if (average >= 40.0) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Average: " << average << "\n";
    std::cout << "Grade: " << grade << "\n";
    return 0;
}
