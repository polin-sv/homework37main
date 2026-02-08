#include "logic.h"

int main() {
	int number;

	cout << "input your number: ";
	cin >> number;

	string msg = are_varios(number) ? "yes" : "no";

	cout << msg << endl;

	return 0;
}