// Write a program to find the sum of the first n natural numbers.
// Write a program to print all prime numbers between 1 and 100.
// Write a program to calculate the sum of digits of a number.
// Write a program to print the Fibonacci series up to a given number.
// Write a program to reverse a given number.
// Write a program to check if a given number is an Armstrong number.

#include <iostream>
using namespace std;
#include <math.h>

int SumOfNaturalNum(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    return sum;
}
bool PrintAllPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        for (int j = 2; j < i; i++)
        {
            if (j % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int sumOfDigit(int num)
{
    int rem;
    int sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    return sum;
}
void FibonacciSeries(int n)
{
    int n1 = 1;
    int n2 = 1;
    cout << n1 << " ";
    cout << n2 << " ";
    for (int i = 2; i <= n; i++)
    {
        int num3 = n1 + n2;
        cout << num3 << " ";
        n1 = n2;
        n2 = num3;
    }
}

int reverseNum(int num)
{
    int reverse = 0;

    while (num > 0)
    {
        int rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    return reverse;
}
void ArmstrongNum(int num)
{

    int armstrong = 0;
    int originalNum = num;

    while (num > 0)
    {
        int rem = num % 10;
        armstrong = pow(rem, 3) + armstrong;
        num = num / 10;
    }
    cout << armstrong << " ";
    if (armstrong == originalNum)
    {
        cout << "the number is Armstrong" << endl;
    }
    else
    {
        cout << "Not an Armstrong number" << endl;
    }
}

int main()
{
    // int ans = SumOfNaturalNum(100);
    // cout << "the sum of N Natural Numbers is " << ans << endl;
    // bool ans = PrintAllPrime()
    // int ans = sumOfDigit(123);
    // cout << "THe sum of Digit is " << ans << endl;

    // FibonacciSeries(10);
    // int ans = reverseNum(123);
    // cout << "the reverse num is " << ans << endl;
    ArmstrongNum(407);
    return 0;
}