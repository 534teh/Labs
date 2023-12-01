#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"

void do_main_task() {

	double x, y;

	cout << "\n Input x value: \n";
	cin >> x;
	cout << "Input y value: \n";
	cin >> y;
	cout << GREEN << x << RESET << ";" << GREEN << y << endl;

	if (((x * x) + (y * y) <= 1) && (x >= 0) && (y <= 0)) {
		cout << BLUE << "\nThe point falls into the specified area\n" << RESET;
	}
	else if ((y >= x) && (0 <= y) && (y <= 1) && (-1 <= x) && (x <= 0)) {
		cout << BLUE << "\nThe point falls into the specified area\n" << RESET;
	}

	else {
		cout << RED <<"\nThe point does not fall into the specified area" << RESET;
	}
	
}
void do_sqr_root() {

	double a, b, c, x1, x2, D;
	
	cout << "\n\nEnter the values of the quadratic equation: " << endl;
	cout << "Enter a:" << endl;
	cin >> a;
	cout << "Enter b:" << endl;
	cin >> b;
	cout << "Enter c:" << endl;
	cin >> c;

	D = (b * b) - 4 * a * c;
	x1 = (-b + sqrt(D)) / (2*a);
	x2 = (-b - sqrt(D)) / (2*a);

	if (a == 0) {
		cout << RED << "\nInvalid input" << RESET;
	}
	if (D < 0 && a != 0) {
		cout << YELLOW << "\nD < 0. No real roots.\n" << RESET;
	}
	if( D > 0 && a != 0){
		cout << BLUE << "\nx1 = " << GREEN << x1 << BLUE << ";    x2 =" << GREEN << x2 << RESET << endl;
		}
	if (D == 0 && a != 0) {
		cout << BLUE << "\nx = " << GREEN << x1 << RESET << endl;
	}

} 
void do_mushrooms() {
	int count;
	cout << "\nВведіть кількість грибів" << endl;
	cin >> count;

		if (count % 10 == 1 && count % 100 != 11) {
			cout << "\nУ мене " << YELLOW << count << " гриб" << RESET << endl;
		}
		else if ((count % 10 >= 2 && count % 10 <= 4) && (count % 100 < 10 || count % 100 >= 20)) {
			cout << "\nУ мене " << YELLOW << count << " гриба" << RESET << endl;
		}
		else {
			cout << "\nУ мене " << YELLOW << count  << " грибів" << RESET << endl;
		}
	}

int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i;

	while (true) {

		cout << "\n\n1. Main task" <<  endl;
		cout << "2. Task A" << endl;
		cout << "3. Task B" << endl;
		cout << "4. Exit" << endl;
		cin >> i;

		switch (i) {
		case 1: 
			do_main_task();
			break;
		case 2:
			do_sqr_root();
			break;
		case 3:
			do_mushrooms();
			break;
		case 4:
			exit(0);
			break;
		default: 
			cout <<RED << "\nPlease, input numbers from 1 to 4." << RESET;
			break;
		}

	}
}