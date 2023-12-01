#include <iostream>
#include <locale>
#include <Windows.h>
#include <random>
#include <string>
#include <cctype>
using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#undef max

void do_graph() {

	double n, p;
	double x, y;

	printf_s("|x      |           y|\n");
	printf_s("|-------|------------|\n");

	for (n = 0; n < 5; n++) {

		for (x = 0; x < 4; x += 0.25) {

			if (x < 2) {
				y = 1.5 * x - 1;
			}
			
			else if (x < 3) {
				y = -2 * x + 5;
			}
			else {
				y = -1;
			}
			printf_s("| %5.2lf | %10.7lf |", x + n * 4, y);
			p = (y + 1) * 10;
			if (y - 1 - p * 10 > 0.5) p++;

			if (x == 2.0) {
				printf_s("                      *       *\n");
			}
			else {
				for (; p > 0; p--) printf_s(" ");
				printf_s("*\n");

			}
		}
	}
}
void do_guessing() {

	int Min_Number = 0;
	int Max_Number = 100;

	random_device rd; 
	mt19937 gen(rd());
	uniform_int_distribution<int> distribution(Min_Number, Max_Number);

	int num = distribution(gen);
	int gnum;
	short n = 1;
	while (true) {
		cout << "\nYour guess: ";
		cin >> gnum;
		if (gnum < num) {
			cout << YELLOW << "bigger" << RESET << endl;
			n++;
		}
		else if(gnum > num) {
			cout << RED << "smaller" << RESET << endl;
			n++;
		}
		 else {
			cout << GREEN <<"You guessed the number" << RESET << endl;
			cout << YELLOW << "Number of attempts: " << RED << n << RESET <<endl;
			break;
		}
	}
}
void do_multiplication() {

	int Min_Number = 2;
	int Max_Number = 9;
	random_device rd;
	mt19937 gen(rd());
		
	int op_num;
	short n, mark = 10;
	for (n = 0; n < 10; n++) {

		uniform_int_distribution<int> distribution(Min_Number, Max_Number);
		int num_1 = distribution(gen);
		int num_2 = distribution(gen);

		cout << n << ". " << num_1 << " * " << num_2 << endl;

		cin >> op_num;

		if (op_num == num_1 * num_2) {

		}
		else {
			mark--;
		}
	}

	if (mark == 10) {
		cout << BLUE   << "Number of correct guesses is: " << RESET << mark << GREEN << ". Your score is : 5" << RESET << endl;
	}
	if (mark == 9) {
		cout << GREEN  << "Number of correct guesses is: " << RESET << mark << GREEN << ". Your score is : 4" << RESET << endl;
	}
	if (mark == 8) {
		cout << YELLOW << "Number of correct guesses is: " << RESET << mark << GREEN << ". Your score is : 3" << RESET << endl;
	}
	if (mark == 7) {
		cout << YELLOW << "Number of correct guesses is: " << RESET << mark << GREEN << ". Your score is : 3" << RESET << endl;
	}
	if (mark < 7) {
		cout << RED    << "Number of correct guesses is: " << RESET << mark << GREEN << ". Your score is : 2" << RESET << endl;
	}



}
void do_num_task() {

	string input;

	cout << "Input integer: ";
	cin >> input;

	int i, num, nnum, num_1, ndig;
	int   sum = 0;
	bool isNumeric = true;
	bool isNegative = false;

	if (input[0] == '-' && isdigit(input[1])) {
		isNegative = true;
		for (char digit : input.substr(1)) {
			if (!isdigit(digit)) {
				isNumeric = false;
				cout << RED << "Invalid input. Please, enter integer.\n" << RESET << endl;
				do_num_task();
				break;
			}
		}
	}
	else {
		for (char digit : input) {
			if (!isdigit(digit)) {
				isNumeric = false;
				cout << RED << "Invalid input. Please, enter integer.\n" << RESET << endl;
				do_num_task();
				break;
			}
		}
	}
	if (isNumeric && isNegative) {
		if (input.length() < 3) {
			for (i = 0; i < input.length() - 1; i++) {
				cout << GREEN << "-" << RESET;
				for (int i = input.length() - 1; i >= 0; i--) {

					cout << GREEN << input.substr(1)[i] << RESET;
				}
				cout << endl;
			}
			cout << "The sum of digits in " << input << " is: " << RED << "-" << input[1] << RESET << endl;
			cout << " Number of digits: " << GREEN << "1" << RESET << endl;
		}

		else for (i = 0; i < input.length(); i++) {
			cout << GREEN << "-" << RESET;
			for (int i = input.length() - 1; i >= 0; i--) {

				cout << GREEN << input.substr(1)[i] << RESET;
			}
			cout << endl;
			nnum = stoi(input.substr(2));
		num_1 = input[1] - '0';
		while (nnum > 0) {
			sum += nnum % 10;
			nnum /= 10;
		}
		sum = sum - num_1;
		ndig = input.length() - 1;
		cout << "The sum of digits in " << input << " is: " <<  RED << sum << RESET << endl;
		cout << " Number of digits: " << GREEN << ndig << RESET << endl;
		break;
		}
		
	}
	if (isNumeric && !isNegative) {
		for (i = 0; i < input.length(); i++) {

			for (int i = input.length() - 1; i >= 0; i--) {

				cout << GREEN << input[i] << RESET;
			}
			cout << endl;
			break;
		}
		num = stoi(input);
		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}
		ndig = input.length();
		cout << "The sum of digits in " << input << " is: " << RED << sum << RESET << endl;
		cout << " Number of digits: " << GREEN << ndig << RESET << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i;

	while (true) {

		cout << "\n\n1. Main task" << endl;
		cout << "2. Task A" << endl;
		cout << "3. Task B" << endl;
		cout << "4. Task C" << endl;
		cout << "5. Exit" << endl;
		cin >> i;

		switch (i) {
		case 1:
			do_graph();
			break;
		case 2:
			do_guessing();
			break;
		case 3:
			do_multiplication();
			break;
		case 4:
			do_num_task();
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << RED << "\nPlease, input numbers from 1 to 5." << RESET;
			break;
		}

	}
}
