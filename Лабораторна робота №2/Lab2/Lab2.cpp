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

	printf_s("1.Вкажіть прізвище, рік, оцінку, рівень кваліфікації.\n");
	scanf_s("%s %d %f %d", surname1, (unsigned)_countof(surname1), &year1, &mark1, &q_level1);
	printf_s("2.Вкажіть прізвище, рік, оцінку, рівень кваліфікації.\n");
	scanf_s("%s %d %f %d", surname2, (unsigned)_countof(surname2), &year2, &mark2, &q_level2);
	printf_s("3.Вкажіть прізвище, рік, оцінку, рівень кваліфікації.\n");
	scanf_s("%s %d %f %d", surname3, (unsigned)_countof(surname3), &year3, &mark3, &q_level3);

	printf_s("----------------------------------------------------------------\n");
	printf_s("| Відомості про привласнення кваліфікації                      |\n");
	printf_s("|--------------------------------------------------------------|\n");
	printf_s("| Прізвище  | Рік        | Оцінка       | Привласнений рівень  |\n");
	printf_s("|           | народження | результатів  | кваліфікації         |\n");
	printf_s("|           |            | іспитів      |                      |\n");
	printf_s("|--------------------------------------------------------------|\n");
	printf_s("| %-9s | %-11d| %-13.2f| %21d|\n", surname1, year1, mark1, q_level1);
	printf_s("| %-9s | %-11d| %-13.1f| %21d|\n", surname2, year2, mark2, q_level2);
	printf_s("| %-9s | %-11d| %-13.2f| %21d|\n", surname3, year3, mark3, q_level3);
	printf_s("|--------------------------------------------------------------|\n");
	printf_s("|Примітка: показана підсумкова оцінка за наслідками екзаменів з|\n");
	printf_s("|теоретичної і практичної підготовки                           |\n");
	printf_s("|--------------------------------------------------------------|\n");

}
