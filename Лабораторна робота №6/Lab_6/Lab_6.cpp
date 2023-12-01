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

void do_matrix() {

#define N 8

	int mas[N][N];
	int Min_Number = -99, Max_Number = 99;

	cout <<  GREEN << "Randomly generated matrix" << RESET << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<int> distribution(Min_Number, Max_Number);
			int arr_num = distribution(gen);
			mas[i][j] = arr_num;
			cout << setw(5) << mas[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N/2; j++) {
			mas[i][N - j - 1] = mas[i][j];
		}
	}
	cout << YELLOW << "The matrix, in which the left half was mirrored onto the right." << RESET << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(5) << mas[i][j];
		}
		cout << endl;
	}
}
void do_max_min() {

#define N 8

	int mas[N][N];
	int mas_B[N][N];
	int Min_Number = -99, Max_Number = 99;
	
	cout << GREEN << "Randomly generated array:" << RESET << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<int> distribution(Min_Number, Max_Number);
			int arr_num = distribution(gen);
			mas[i][j] = arr_num;
			mas_B[i][j] = arr_num;
			cout << setw(5) << mas[i][j];
		}
		cout << endl;
	}

	cout << YELLOW << "\nArray in which the order of the biggest number and the first number in a string were changed:" << RESET;

	for (int i = 0; i < N; i++) {
		int Max = Min_Number - 1;
		int max_index = 0;
		for (int j = 0; j < N; j++) {
			if (Max < mas[i][j]) {
				Max = mas[i][j];
				max_index = j;
			}
		}
		int temp = mas[i][0];
		mas[i][0] = mas[i][max_index];
		mas[i][max_index] = temp;

		//cout << "Biggest number is: " << Max << endl;
	}
	cout << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(5) << mas[i][j];
		}
		cout << endl;
	}

	cout << RED << "\nArray in which the order of the smallest number and the last number in a row were changed:" << RESET;

	for (int j = 0; j < N; j++) {
		int min_index = 0;
		int Min = Max_Number + 1;
		for (int i = 0; i < N; i++) {
			if (Min > mas_B[i][j]) {
				Min = mas_B[i][j];
				min_index = i;
			}
		}
		int temp_2 = mas_B[N-1][j];
		mas_B[N-1][j] = mas_B[min_index][j];
		mas_B[min_index][j] = temp_2;

		//cout << "Smallest number is: " << Min << endl;
	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(5) << mas_B[i][j];
		}
		cout << endl;
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
		cout << "3. Exit" << endl;
		cin >> i;

		switch (i) {
		case 1:
			do_matrix();
			break;
		case 2:
			do_max_min();
			break;
		case 3:
			exit(0);
			break;
		default:
			cout << RED << "\nPlease, input numbers from 1 to 5." << RESET;
			break;
		}

	}
}