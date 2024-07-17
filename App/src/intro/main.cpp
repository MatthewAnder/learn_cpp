#include <iostream>

int main() {
	std::cout << "Hello World!" << "\n";
	// prints whatever on the right side to the console
	// there is a variety ways of using cout
	std::cout << "Hi" << "\t" << 2 << "\n";
	// These are outputs

	// Inputs
	int8_t num{};
	std::cout << "Input an 8 bit integer: ";
	std::cin >> num;
	std::cout << num;


	return 0;
}