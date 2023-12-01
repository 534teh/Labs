#include <iostream>
#include <Windows.h>
#include <random>
#include <iomanip>

using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"

#define N 100
#define M 100
void do_matrix() {
	int arr_col, arr_row, arr_fill;

	cout << "Enter arrays row length: " << endl;
	cin >> arr_col;
	cout << "Enter arrays column length: " << endl;
	cin >> arr_row;
	cout << "Fill array manually (enter 1)" << endl;
	cout << "Fill array with random values (enter 2)" << endl;
	cin >> arr_fill;

	int mas[N];
	if (arr_fill == 1) {
		for (int i = 0; i < arr_col * arr_row; i++) {
			cin >> mas[i];
		}
		cout << "\n\nArray in a row: " << endl;
		for (int i = 0; i < arr_col * arr_row; i++) {
			cout << GREEN << setw(6) << mas[i] << RESET;
		}
	}

	if (arr_fill == 2) {
		cout << "Generated array in a row: " << endl;
		for (int i = 0; i < arr_col * arr_row; i++) {

			int Min_Number = -10;
			int	Max_Number = 10;

			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<int> distribution(Min_Number, Max_Number);
			int arr_num = distribution(gen);

			mas[i] = arr_num;
			cout << setw(6) << mas[i];
		}
	}
	int mas2[N][M];
	int mas3[N][M];
	cout << "\nTwo dimensional array: " << endl;
	int temp = 0;
	for (int j = 0; j < arr_row; j++) {
		for (int i = 0; i < arr_col; i++) {
			mas2[j][i] = mas[temp];
			mas3[j][i] = mas[temp];
			cout << YELLOW << setw(6)  << mas2[j][i] << RESET;
			temp++;
		}
		cout << endl;
	}
	if (arr_col != arr_row) {
		cout << RED << "Enter square matrix if you want to transform it further" << RESET;
		return;
	}
		cout << "\nNew two dimensional array: " << endl;
		for (int j = 0; j < arr_row; j++) {
			int temp2 = 0;
			for (int i = 0; i < arr_col; i++) {
				mas2[j][i] = mas2[j][i] * mas3[arr_col - temp2 - 1][i];
				cout << GREEN << setw(6) << mas2[j][i] << RESET;
				temp2++;
			}
			cout << endl;
		}
		cout << "\nNew one dimensional array: " << endl;
		int temp3 = 0;
		for (int j = 0; j < arr_row; j++) {
			for (int i = 0; i < arr_col; i++) {
				mas[temp3] = mas2[j][i];
				cout << RED << setw(6) << mas[temp3] << RESET;
				temp3++;
			}
		}
}

int main() {
	int i;
	while (true) {

		cout << "\n\n1. Main task" << endl;
		cout << "2. Exit" << endl;
		cin >> i;
		system("cls");
		switch (i) {
		case 1:
			do_matrix();
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
