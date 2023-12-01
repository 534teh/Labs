#include <iostream>
#include <climits>
#include <string>
using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"

void find_num() {

	int num;
	int min_num = INT_MAX;
	string check;

	cout << "Input integer:" << endl;
	cin >> check;

	if (check[0] == '0' && check.length() != 1){
		cout << RED << "Invalid number." << RESET;
		return;
	}
	if (check[0] == '-' && check[1] == '0' && check.length() != 2) {
		cout << RED << "Invalid number." << RESET;
		return;
	}
	num = stoi(check);
	if (num == 0){
		cout << "Minimal digit: " << GREEN << num << RESET << endl;
		return;
	}
	if (check != to_string(num)) {
		cout << RED << "Invalid number." << RESET;
		return;
	}
	if (num < 0) {
		num *= -1;
	}

	while (num != 0) {
		int digit = num % 10;
		if (digit < min_num) {
			min_num = digit;
		}
		num /= 10;
	}

	cout << "Minimal digit: " << GREEN << min_num << RESET << endl;
}

int main()
{
	int i;

	while (true) {

		cout << "\n\n1. Main task" << endl;
		cout << "2. Exit" << endl;
		cin >> i;
		system("cls");
		switch (i) {
		case 1:
			find_num();
			break;
		case 2:
			exit(0);
			break;

		default:
			cout << RED << "\nPlease, input numbers from 1 to 5." << RESET;
			break;
		}

	}
}
