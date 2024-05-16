// Write a function to calculate the factorial of a number.
// Write a function to check if a number is prime.

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // int ans = factorial(5);
    // cout << "Factorial of a num is " << ans << endl;

    // bool ans = isPrime(24);
    // ans ? cout << "Prime number" : cout << "Not a prime number" << endl;
}