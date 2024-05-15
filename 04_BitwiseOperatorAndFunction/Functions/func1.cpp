#include <iostream>
using namespace std;

// void PrintName(char name[])
// {
//     cout << "My name is " << name << endl;
// }
bool checkAge(int n)
{
    if (n > 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
    }
    return ans;
}
float calculateTotalSum(int a, int l, int n)
{
    float ans = ((n) * (a + l)) / 2;
    return ans;
}
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    // char ch[] = "Vivek";
    // PrintName(ch);
    // int age = 13;
    // if (checkAge(age))
    // {
    //     cout << "You can Vote";
    // }
    // else
    // {
    //     cout << "You cannot vote";
    // }
    // int ans = power(2, 5);
    // cout << ans << endl;
    // float ans = calculateTotalSum(2, 10, 5);
    // cout << ans;
    if (isPrime(2))
    {
        cout << "the number is PRime" << endl;
    }
    else
    {
        cout << "the number is not prime" << endl;
    }
    return 0;
}