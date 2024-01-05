#include <iostream>
using namespace std;

int findinggcd(int num1, int num2);

int main()
{
    int answer = 0;
    int a; // used for taking the first number as input
    int b; // used for taking the second number as input
    int gcd = 1;

    cout << "Enter the first Number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "The GCD of two numbers is: ";
    answer = findinggcd(a, b);
    cout << answer;

    return 0;
}

int findinggcd(int num1, int num2)
{
    int swap = 0;
    while (num2 != 0)
    {
        swap = num2;
        num2 = num1 % num2;
        num1 = swap;
    }
    return num1;
}
