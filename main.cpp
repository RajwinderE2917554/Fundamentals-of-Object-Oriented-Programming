#include <iostream>

int main() {
    int valid_count = 0;
    int num;

    while (true) {
        std::cout << "Enter the number: ";
        std::cin >> num;

        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
            std::cin.clear();
            std::cin.ignore(256, '\n');
            continue;
        }

        if (num % 8 == 0) {
            valid_count++;
        } else {
            break;
        }
    }

    std::cout << "Total " << valid_count << " numbers are valid numbers." << std::endl;

    return 0;
}
