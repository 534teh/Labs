#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char  surname1[9], surname2[9], surname3[9];
	int   year1, year2, year3;
	float mark1, mark2, mark3;
	int   q_level1, q_level2, q_level3;

	printf_s("1.������ �������, ��, ������, ����� �����������.\n");
	scanf_s("%s %d %f %d", surname1, (unsigned)_countof(surname1), &year1, &mark1, &q_level1);
	printf_s("2.������ �������, ��, ������, ����� �����������.\n");
	scanf_s("%s %d %f %d", surname2, (unsigned)_countof(surname2), &year2, &mark2, &q_level2);
	printf_s("3.������ �������, ��, ������, ����� �����������.\n");
	scanf_s("%s %d %f %d", surname3, (unsigned)_countof(surname3), &year3, &mark3, &q_level3);

	printf_s("----------------------------------------------------------------\n");
	printf_s("| ³������ ��� ������������ �����������                      |\n");
	printf_s("|--------------------------------------------------------------|\n");
	printf_s("| �������  | г�        | ������       | ������������ �����  |\n");
	printf_s("|           | ���������� | ����������  | �����������         |\n");
	printf_s("|           |            | ������      |                      |\n");
	printf_s("|--------------------------------------------------------------|\n");
	printf_s("| %-9s | %-11d| %-13.2f| %21d|\n", surname1, year1, mark1, q_level1);
	printf_s("| %-9s | %-11d| %-13.1f| %21d|\n", surname2, year2, mark2, q_level2);
	printf_s("| %-9s | %-11d| %-13.2f| %21d|\n", surname3, year3, mark3, q_level3);
	printf_s("|--------------------------------------------------------------|\n");
	printf_s("|�������: �������� ��������� ������ �� ��������� �������� �|\n");
	printf_s("|���������� � ��������� ���������                           |\n");
	printf_s("|--------------------------------------------------------------|\n");

}
