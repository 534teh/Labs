#include <iostream>
#include <math.h>
#include <stdio.h>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); //  Start of generation new random set



    cout << "Task_1. Define size of base types of C++:" << endl;

    cout << "Size of int type is "   << sizeof(int) <<    " bytes." << endl;
    cout << "Size of short type is " << sizeof(short) <<  " bytes." << endl;
    cout << "Size of long type is "  << sizeof(long) <<   " bytes." << endl;
    cout << "Size of char type is "  << sizeof(char) <<   " bytes." << endl;
    cout << "Size of float type is " << sizeof(float) <<  " bytes." << endl;
    cout << "Size of int double is " << sizeof(double) << " bytes." << endl;

    system("pause");
    system("cls");

    cout << "Task_2. Define square of triangle" << endl;

    double a,// first side of triangle
        b,// second side of triangle
        c,// third side of triangle
        S,// square of triangle
        p;// perimeter/2 

    cout << "Input sides of triangle :";
    cin  >> a >> b >> c;

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

    cout << "Task_3. Calculate 8 exponantial of number : " << endl;

    int num;// source number

    long long num2; // num^2
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


    cout << "Task_4. Change places of two variables " << endl;

    int first, second,
        temp; // 3 variable for changing first and second

    cout << " Input 1 case: ";
    cin  >> first ;
    cout << " Input 2 case: ";
    cin  >> second;

    cout << "Variables before changing: " << first << " , " << second << endl;

    temp   = first;
    first  = second;
    second = temp;

    cout << "Variables after changing: " << first << " , " << second << endl;

    system("pause");
    system("cls");


    cout << "Task_5. Calculate the number of seconds in a set time interval " << endl;
     
    int time            =        10;
    unsigned int time_0 =       100;  
    int64_t  time_1     =      1000;
    long long time_2    =     10000;
    long long time_3    =    100000;

    cout << "Number of seconds in 10 year:     " << time   *   31536000 << endl;
    cout << "Number of seconds in 100 year:    " << time_0 *   31536000 << endl;
    cout << "Number of seconds in 1000 year:   " << time_1 *   31536000 << endl;
    cout << "Number of seconds in 10000 year:  " << time_2 *   31536000 << endl;
    cout << "Number of seconds in 100000 year: " << time_3 *   31536000 << endl;
    
    system("pause");
    system("cls");


    cout << "Task 5. Calculate a number of seconds in 10, 100, 1000 ... years." << endl;
    long long year1;
    long long year100;
    long long year1000;
    year1 = 60 * 60 * 24 * 365;
    year100  = year1 *  100;
    year1000 = year1 * 1000;

    cout << "Counted seconds: \n 1 year is " << year1 << " seconds \n 100 years are " << year100 << " seconds \n 1000 years are " << year1000 << " seconds" << endl;


    system("pause");
    system("cls");




    cout << "Task_6. Random number generator" << endl;

   const int low = 7;
   const int high = 20;
    int rnd =  rand()%( high - low ) + low ;
      
    int user;
    int PC;

    cout << "Input number: " << endl;
    cin >> user;
    PC = user + rnd; 
    cout << "Your number is " << user << ", my number is " << PC << ".\n I won";
}