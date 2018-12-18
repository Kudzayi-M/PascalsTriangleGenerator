#include <iostream>
#include "funcs.h"
// 2n-1


int main() {
	
	std::cout << "Please enter the number of lines you'd like to write: ";
	std::cin >> var;
	int max = (2 * var) - 1;

	while (pro <= var) {
		for (int i = 1; i <= (((max - 1) / 2) - x); i++) {
			std::cout << " ";
		}
		for (int i = 1; i <= y + 1; i++) {
			std::cout << getCombos(pro , rIt) << ",";
			tempCheck += getCombos(pro, rIt);
			rIt++;
		}
		std::cout << " = " << tempCheck;
		tempCheck = 0;
		rIt = 0;
		y++;
		x++;
		pro++;
		std::cout << std::endl;
	}

	std::cin.get();
	std::cin.get();
	return 0;
}
