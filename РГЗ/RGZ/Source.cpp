#include "Header.h"

int loadPoints() {
	std::ifstream file("points.txt");
	int savedPoints = 0;
	if (file.is_open()) {
		file >> savedPoints;
		file.close();
	}
	return savedPoints;
}

void savePoints(int pointsToSave) {
	std::ofstream file("points.txt");
	if (file.is_open()) {
		file << pointsToSave;
		file.close();
	}
}

int loadAttempts() {
	std::ifstream file("attempts.txt");
	int savedAttempts = 0;
	if (file.is_open()) {
		file >> savedAttempts;
		file.close();
	}
	return savedAttempts;
}

void saveAttempts(int attemptsToSave) {
	std::ofstream file("attempts.txt");
	if (file.is_open()) {
		file << attemptsToSave;
		file.close();
	}
}

int* createArray() {
	int count_gen = 0;
	int* arr = new int[3];

	while (count_gen != 3) {
		int Min_Number = 1;
		int	Max_Number = 3;

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<int> distribution(Min_Number, Max_Number);
		int arr_num = distribution(gen);

		arr[count_gen] = arr_num;
		count_gen++;
	}
	return arr;
}

int casino(int* array, int points) {

	points = loadPoints();
	int j = 0;
	for (int i = 0; i < 2; i++) {
		if (array[i] == array[++j]) {
		}
		else {
			j = 0;
			break;
		}
	}
	if (j != 0) {
		switch (array[0]) {
		case 1:
			points += 100;
			break;
		case 2:
			points += 200;
			break;
		case 3:
			points += 300;
			break;
		}
	}
	return points;
}

int image_change_1(int* array) {

	for (int i = 1; i <= 3; i++) {
		if (array[0] == i) return i;
	}
}

int image_change_2(int* array) {

	for (int i = 1; i <= 3; i++) {
		if (array[1] == i) return i;
	}
}

int image_change_3(int* array) {

	for (int i = 1; i <= 3; i++) {
		if (array[2] == i) return i;
	}
}

void save_to_leaderboard(int points, int attempts) {
	StreamWriter^ writer = gcnew StreamWriter("Leaderboard.txt", true);

	String^ formattedOutput = String::Format("{0,-1} {1,0}", points, attempts);
	writer->WriteLine(formattedOutput);

	writer->Close();
}
