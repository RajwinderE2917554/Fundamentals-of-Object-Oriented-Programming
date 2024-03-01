# Fundamentals-of-Object-Oriented-Programming
#include <iostream>

class NumberValidator {
    
public:

    int validCount=0;
    int divisor=0;
    int dividend=0;


    void getInput() {
        std::cout << "Enter divisor: ";
        std::cin >> divisor;

        std::cout << "Enter dividend: ";
        std::cin >> dividend;
    }
    
      void displayCount() {
        std::cout << "Valid numbers entered: " << validCount << std::endl;
    }

    void countValidNumber() {
        if (dividend != 0 && divisor % dividend == 0) {
            validCount++;
        }
        else{
            displayCount();
        }
    }

  
};

int main() {
    NumberValidator validator;

    do {
        validator.getInput();
        validator.countValidNumber();

    } while (validator.dividend != 0 && validator.divisor % validator.dividend == 0);


    return 0;
}
