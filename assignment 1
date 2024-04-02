#include <iostream>

namespace userFunctions {
	bool isDivisibleBy8(int number) {
		return number % 8 == 0;
	}

}

int main() {
	int iNumber = 0;
	int iCount = 0;	
	while (userFunctions::isDivisibleBy8(iNumber)) {
		std::cout << "Enter a Number: ";
		std::cin >> iNumber;
		if (!userFunctions::isDivisibleBy8(iNumber)) {
			break;
		}
		iCount++;
		
	}
	std::cout << "Total Valid Numbers: " << iCount;

}
