#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "ENter Your Grade";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Very Very Good" << endl;
        break;
    case 'B':
        cout << "Very Good" << endl;
        break;
    case 'C':
        cout << " Good" << endl;
        break;
    case 'D':
        cout << "Padh le Bhai" << endl;
        break;

    default:
        cout << "Tumse na Ho Payega" << endl;
        break;
    }
}