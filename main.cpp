#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
	bool running = true;

	while (running) {
		std::string input;

		std::cout << "Enter first number: ";

		std::cin >> input;

		std::cout << "\r\nmy name " << input;
	}

	return 0;
}
