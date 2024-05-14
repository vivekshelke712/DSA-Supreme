#include <iostream>
using namespace std;
void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // For Spaces
        for (int s = 0; s < n - i; s++)
        {
            cout << " ";
        }
        // For Stars
        for (int j = 0; j < i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}
void Inversepyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // For Spaces
        for (int s = 0; s < i; s++)
        {
            cout << " ";
        }
        // For Stars
        for (int j = 0; j < n - i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}
void diamond(int n)
{
    pyramid(5);
    Inversepyramid(5);
}
void hallowPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // For Spaces
        for (int s = 0; s < n - i; s++)
        {
            cout << " ";
        }
        // For Stars
        for (int j = 0; j < i; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == i + 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void mixPyramid(int n)
{
    // int n = 4;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int s = 0; s < 2 * i + 1; s++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++)
        {
            cout << "*";
        }
        cout << endl;

        // for (int j = 0; j < i; j++)
        // {
        //     cout << "*";
        // }
        // for (int s = 0; s < 2 * (n - i) - 1; s++)
        // {
        //     cout << " ";
        // }
        // for (int k = 0; k < i; k++)
        // {
        //     cout << "*";
        // }
        // cout << endl;
    }
}

void fancy12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (i % 2 == 0)
            {
                cout << i + 1;
            }
            cout << "$";
        }
        cout << endl;
    }
}

void ABCBA(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < i; j++)
        {
            cout << ch++;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    // pyramid(n);
    // Inversepyramid(n);
    // diamond(n);
    // hallowPyramid(n);
    // mixPyramid(n);
    // fancy12(n);
    ABCBA(n);
    return 0;
}