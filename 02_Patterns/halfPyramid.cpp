#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter the total no of rows" << endl;
    cin >> rows;
    cout << "Enter the total number of columns " << endl;
    cin >> cols;

    for (int row = 0; row <= rows; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}