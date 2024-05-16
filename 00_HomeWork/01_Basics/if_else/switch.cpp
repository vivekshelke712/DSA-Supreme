#include <iostream>
using namespace std;
// Write a program to convert a grade('A', 'B', 'C', 'D', 'F') to its equivalent numeric value using a switch case.
int main()
{
    char ch;
    cout << "Enter a character" << endl;
    cin >> ch;
    switch (ch)
    {
    case 'A':
        cout << "You Got A Grade" << endl;
        break;
    case 'B':
        cout << "You Got B Grade" << endl;
        break;
    case 'C':
        cout << "You Got C Grade" << endl;
        break;
    case 'D':
        cout << "You Got D Grade" << endl;
        break;
    case 'E':
        cout << "You Got E Grade" << endl;
        break;

    default:
        cout << "Invalid Input " << endl;
        break;
    }
}