
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    cout << "Task_1.Define size of base types of C++:" << endl;

    cout << "Size of int type is " << sizeof(int) << " bytes." << endl;
    cout << "Size of short type is " << sizeof(short) << " bytes." << endl;
    cout << "Size of long type is " << sizeof(long) << " bytes." << endl;
    cout << "Size of char type is " << sizeof(char) << " bytes." << endl;
    cout << "Size of float type is " << sizeof(float) << " bytes." << endl;
    cout << "Size of int double is " << sizeof(double) << " bytes." << endl;
    system("pause");
    system("cls");

    cout << "Task_2.Define square of triangle" << endl;
    double a,// first side of triangle
        b,// second side of triangle
        c,// third side of triangle
        S,// square of triangle
        p;// perimeter/2 

    cout << "Input sides of triangle :";
    cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < a + b) {
        p = (a + b + c) / 2;
        S = sqrt(p + (p - a) * (p - b) * (p - c));
        cout << "Square of triangle is :" << S << endl;

    }
    else {
        cout << "Incorect size ";

    }
    system("pause");
    system("cls");

    cout << "Task_3.Calculate 8 exponantial of number : " << endl;

    int num;// source number

    long long num2;// num^2
    long long num4; // num^4
    long long num8; // num^8

    cout << "Input source number ";
    cin >> num;

    num2 = num * num;
    num4 = num2 * num2;
    num8 = num4 * num4;

    cout << num << "^8 = " << num8 << endl;

    system("pause");
    system("cls");


    cout << "Task_4.Change places of two variables 1 case " << endl;

    int first, second,
        temp; // 3 variable for changing first and second

    cout << " Input 1 case";
    cin >> first >> second;

    cout << "Variables before changing: " << first << " , " << second << endl;

    temp = first;
    first = second;
    second = temp;

    cout << "Variables after changing: " << first << " , " << second << endl;

    system("pause");
    system("cls");
}