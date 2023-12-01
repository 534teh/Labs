#pragma once

#include <iostream>
#include <Windows.h>
#include <random>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace System;
using namespace System::IO;

int loadPoints();
void savePoints(int pointsToSave);
int loadAttempts();
void saveAttempts(int attemptsToSave);
int casino(int* array, int points);
int* createArray();
int image_change_1(int* array);
int image_change_2(int* array);
int image_change_3(int* array);
void save_to_leaderboard(int points, int attempts);