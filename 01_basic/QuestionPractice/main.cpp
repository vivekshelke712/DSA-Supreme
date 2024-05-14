#include <iostream>
using namespace std;

void areaOfCirlce(int r)
{
    float area = 3.14 * (r * r);
    cout << "Area of Circle is : " << area << endl;
}
void evenOdd()
{
    int num;
    cout << "Enter a nummber " << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The number is even" << endl;
    }
    else
    {
        cout << "the number is odd";
    }
}
void largestNum()
{
    int a = 4;
    int b = 7;
    int c = 8;
    if (a > b && a > c)
    {
        cout << " A is LArgest among all";
    }
    else if (b > a && b > c)
    {
        cout << "B is largest among all";
    }
    else
    {
        cout << "C is the largest among all";
    }
}
void leapYear()
{
    int year;
    cout << "Enter the year " << endl;
    cin >> year;
    string result = (year % 4 == 0) ? "Leap Year" : "Not a leap year";
    cout << result;
}
void sumOfDigit()
{
    int a = 34;
    int b = 35;
    int c = a + b;
    cout << "The Sum of digit is : " << c << endl;
}

int main()
{
    cout << "Hello World" << endl;
    // areaOfCirlce(5);
    // evenOdd();
    // largestNum();
    // leapYear();
    sumOfDigit();
    return 0;
}
