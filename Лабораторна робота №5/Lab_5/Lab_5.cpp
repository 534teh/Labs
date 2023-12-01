#include <iostream>
#include <Windows.h>
#include <random>
#include <unordered_map>
#include <vector>
#include <iomanip>

using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"

void do_calc() {

	const int N = 100;
	int mas[N]{};
	int n;
	cout << GREEN << "Enter the size of the array:" << RESET << endl;
	cin >> n;
	cout << endl;
	cout << GREEN << "Enter array values: " << RESET << endl;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		mas[i] = num;
	}
	for (int i = 0; i < n; i++) cout << setw(6) << mas[i];
	cout << endl;
	int count_negative_num = 0;
	for (int i = 0; i < n; i++) {
		int count = 1;
		if (mas[i] != -158) {
			for (int j = i + 1; j < n; j++) {
				if (mas[i] == mas[j]) {
					count++;
					count_negative_num--;
					mas[j] = -158;
				}
			}
			cout << YELLOW << setw(6) << mas[i] << RESET << " appears " << RED << count << RESET << " times." << endl;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (mas[i] == -158) {
			count_negative_num++;
		}
	}
	if(count_negative_num > 0) cout << YELLOW << "  -158" << RESET << " appears " << RED << count_negative_num << RESET << " times." << endl;
}
void do_smoking() {

	const int N = 10;
	bool plain_is_full = true, answer = true;
	string answ, answ_2;
	string pos = "Yes";
	string neg = "No";
	int mas[N] = {0,0,0,0,0,0,0,0,0,0};
	int ip = 0, in = 5;

	while(plain_is_full) {

		cout << "\nAre you smoking? Answer by " << RED << "'Yes'" << RESET << " or " << GREEN << "'No'." << RESET << endl;
		cin >> answ;

		if (answ == pos) {
			if (mas[4] == 1) cout << RED << "\nThis sector is full" << RESET << endl;
			if (mas[4] != 1) {
				for (ip; ip < 5; ) {
					if (mas[ip] == 0) {
						mas[ip] = mas[ip] + 1;
					}
					ip++;
					for (int i = 0; i < N/2; i++) {
						cout << setw(2) << RED << mas[i] << " ";
					}
					cout << "    ";
					for (int i = 5; i < N; i++) {
						cout << setw(2) << GREEN << mas[i] << " " << RESET;
					}
					break;
				}
			}
		}
		else if (answ == neg) {
			if (mas[9] == 1) cout << RED << "\nThis sector is full" << RESET << endl;
			if (mas[9] != 1) {
				for (in; in < 10; ) {
					if (mas[in] == 0) {
						mas[in] = mas[in] + 1;
					}
					in++;
					break;
				}
				for (int i = 0; i < N / 2; i++) {
					cout << setw(2) << RED << mas[i] << " ";
				}
				cout << "    ";
				for (int i = 5; i < N; i++) {
					cout << setw(2) << GREEN << mas[i] << " " << RESET;
				}
			}
		}

		if (mas[4] == 1 && mas[9] == 1) {
			while (answer) {
				cout << RED << "\n\nThis plain is full. But you may board another plane if you wish." << RESET << endl;
				cin >> answ_2;
				if (answ_2 == neg) {
					plain_is_full = false;
					answer = false;
				}
				else if (answ_2 == pos) {
					plain_is_full = false;
					answer = false;
					do_smoking();
				}
			}
		}
	}
}
void do_array() {

	const int N = 1000;
	int mas[N]{};
	int Min_Number = -999;
	int Max_Number = 999;
	int n, del, del_s, paste;
		cout << GREEN << "\nInput array size:" << RESET << endl;
		cin >> n;
		if (n <= 0 || n > N) {
			cout << RED << "Invalid array size. Please enter a positive integer less than or equal to " << GREEN << N << RESET << endl;
			return;
		}

		cout << YELLOW << "\nInput amount of elements you want to paste and delete." << RESET << endl;
		cin >> del;

		if (del < 0 || del > n) {
			cout << RED << "\nInvalid number of elements to delete or paste." << RESET << endl;
			do_array();
		}

		cout << "\nInput position from which deleting would start." << endl;
		cin >> del_s;
		cout << "\nInput position from which pasting would start." << endl;
		cin >> paste;

		if (0 > del_s || n < del_s || 0 > paste || n < paste ) {
			cout << RED << "Invalid input. Cannot paste or delete that amount of elements." << RESET << endl;
			do_array();
		}
		if (del + del_s > n || del + paste > n) {
			cout << RED << "Invalid input. Cannot paste or delete that amount of elements from specified position." << RESET << endl;
			do_array();
		}
		cout << YELLOW << "Your array: " << RESET << endl;
		for (int i = 0; i < n + del; i++) {
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<int> distribution(Min_Number, Max_Number);
			int arr_num = distribution(gen);

			mas[i] = arr_num;
			if (i < n && i >= del_s && i < del + del_s) {
				cout << RED << setw(5) << mas[i] << RESET;
			}
			else if (i < n) cout << GREEN << setw(5) << mas[i] << RESET;
		}

		if (del + del_s <= n && del + paste <= n) {
			cout << YELLOW << "\nNew array: " << RESET << endl;
			for (int i = 0; i < n + del; i++) {

				if (i >= del_s && i < del + del_s) {
					mas[i] = 1000;
				}

				if (i == paste) {
					for (int j = paste; j < paste + del; j++) {
						random_device rd;
						mt19937 gen(rd());
						uniform_int_distribution<int> distribution(Min_Number, Max_Number);
						int arr_num = distribution(gen);
						cout << setw(5) << arr_num;
					}
				}

				if (mas[i] != 1000 && i < n) {
					cout << GREEN << setw(5) << mas[i] << RESET;
				}
			}	
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
		cout << "4. Exit" << endl;
		cin >> i;

		switch (i) {
		case 1:
			do_calc();
			break;
		case 2:
			do_smoking();
			break;
		case 3:
			do_array();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << RED << "\nPlease, input numbers from 1 to 4." << RESET;
			break;
		}

	}
}
