# Fundamentals-of-Object-Oriented-Programming
1.	In the field of programming, Iteration Statements are helpful when we need a specific task in repetition. They’re essential as they reduce hours of work to seconds. An iteration is a sequence of instructions that is continually repeated until a certain condition is reached. As per given statement you need to implement the task using iterations. 
A number is said to be valid if it is divisible by 8. Develop a logic that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. 
Sample Input and Output:
Enter the number
8
Enter the number
16
Enter the number
96
Enter the number
6
Total 3 numbers are valid numbers.


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

