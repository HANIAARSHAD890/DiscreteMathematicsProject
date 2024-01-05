#include <iostream>
using namespace std;

void findingprimefactors(int num, int primeno[]);

int main()
{
    int primeno[100] = {0};  // used for taking primenos
    int num;                 // used for taking the number as input
    cout << "Enter Number: ";
    cin >> num;
    findingprimefactors(num, primeno);
    for (int i = 0; primeno[i] != 0; i++)   // loop for displaying primenos
    {
        cout << primeno[i] << " ";
    }
    return 0;
}

void findingprimefactors(int num, int primeno[])
{
    int factorno = -1;  // no of primefactors stored in  the array of primenos
    while (num != 1)
    {
        
        for (int i = 2; i <= num; i++)// outer loop
        { 
            if (num % i == 0)// inner loop
            {
                factorno++;
                primeno[factorno] = i;  // storing prime factors in an array of primenos
                num = num / i;// decreasing number by the factor
                break;
            }
        }
    }
}
