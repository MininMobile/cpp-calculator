#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num1;
	string operation;
	int num2;

	int result;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter operation: ";
	cin >> operation;

	cout << "Enter first number: ";
	cin >> num2;

	if (operation == "+") {
		result = num1 + num2;
	} else if (operation == "-") {
		result = num1 - num2;
	} else if (operation == "*") {
		result = num1 * num2;
	} else if (operation == "/") {
		result = num1 / num2;
	} else {
		return -1;
	}

	cout << "\r\nResult: " << result << "\r\n\r\n";

	return 0;
}
