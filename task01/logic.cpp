#include "logic.h"

bool are_varios(int number) {
	bool result = true;
	int digit = number % 10;

	if (number < 0) {
		return false;
	}

	while (number > 0) {

		int temp_number = number / 10; // temporary number
		int digit2 = temp_number % 10;

		while (temp_number > 0) {
			if (digit == digit2) {
				return false;
			}
			temp_number /= 10;
			digit2 = temp_number % 10;

		}

		number /= 10;
		digit = number % 10;
	}

	return result;
}