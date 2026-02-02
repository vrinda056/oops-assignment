#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // // Q1 Write a program (WAP) to display "Hello World" on console display.
    cout<<"hello world";
    // // Q2 WAP to input an integer, decimal and character and display it.
    int a;
    float b;
    char c;
    cout << "Enter integer, decimal and character: ";
    cin >> a >> b >> c;
    cout << "Integer: " << a << ", Decimal: " << b << ", Character: " << c << endl;

    // // Q3 WAP to add, subtract, multiply, divide numbers.
    float x, y;
    cout << "\nEnter two numbers: ";
    cin >> x >> y;
    cout << "Add: " << x+ y << endl;
    cout << "Subtract: " << x- y << endl;
    cout << "Multiply: " << x* y << endl;
    cout << "Divide: " << x / y << endl;

     // // Q4 Write a C++ program that will ask for a temperature in Celsius and display it in degree Fahrenheit.[F=9C/5+32]
    float ce;
    cout << "\nEnter temperature in Celsius: ";
    cin >> ce;
    cout << "Fahrenheit: " << (ce * 9 / 5) + 32 << endl;

    // // Q5 WAP to format console output using '\n', '\t', '\b' , endl, setw within cout statement
    cout << "\nHello\nWorld" << endl;
    cout << "Hello\tWorld" << endl;
    cout << "ABC\bD" << endl;
    cout << setw(10) << "C++" << endl;

   // // Q6 WAP to utilize assignment += and - = type operators.
    int e;
    cout << "\nEnter a number: ";
    cin >> e;

    e += 5;
    cout << "After += 5 : " << e << endl;

    e-= 3;
    cout << "After -= 3 : " << e<< endl;

    // // Q7 WAP to swap two numbers using bitwise operator.
    int f, g;
    cout << "\nEnter two numbers to swap: ";
    cin >> f >> ;
    f = f ^ g;
    g = f ^ g;
    f = f ^ g;
    cout << "After swap: " << f << " " << g << endl;

    // Q8 Write a program to solve the following problem
   // // A library charges a fine for every book return late. For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be cancelled .WAP to accept no. of days the member is late to return the book and display the fine or appropriate message.
    int days;
    cout << "\nEnter number of days late: ";
    cin >> days;

    if (days <= 5)
        cout << "Fine: 50 paise" << endl;
    else if (days <= 10)
        cout << "Fine: 1 rupee" << endl;
    else if (days <= 30)
        cout << "Fine: 5 rupees" << endl;
    else
        cout << "Membership cancelled" << endl;

    // // Q9 WAP to display arithmetic operations using switch-case statement.
    int num1, num2, choice;
    cout << "\nEnter two numbers: ";
    cin >> num1 >> num2;
    cout << "1.Add 2.Subtract 3.Multiply 4.Divide: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Result: " << num1 + num2; break;
        case 2: cout << "Result: " << num1 - num2; break;
        case 3: cout << "Result: " << num1 * num2; break;
        case 4: cout << "Result: " << num1 / num2; break;
        default: cout << "Invalid choice";
    }
    cout << endl;

     // // Q10 WAP to check whether the given number is even or odd (By using if-else and conditional operator).
    int n1;
    cout << "\nEnter a number: ";
    cin >> n1;
    if (n1 % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

   
    cout << ((n1 % 2 == 0) ? "Even" : "Odd") << endl;

    return 0;
}