#include <iostream>
using namespace std;

int findinggcd(int num1, int num2);
int findinglcm(int num1, int num2, int gcd);

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

    cout << "The LCM of two numbers is: ";
    gcd = findinggcd(a, b);
    answer = findinglcm(a, b, gcd);
    cout << answer;

    return 0;
}

int findinggcd(int num1, int num2)     // by Euclidean algo
{
    int swappingvariable = 0;    // this is used to swap value
    while (num2 != 0)           // loop will be terminated when value of second number decreased to zero
    {
        swappingvariable = num2;  
        num2 = num1 % num2;
        num1 = swappingvariable;
    }
    return num1;
}

int findinglcm(int num1, int num2, int gcd)
{
    int lcm;
    lcm = num1 * num2;
    lcm = lcm / gcd;     // lcm finding with the help of gcd
    return lcm;
}
