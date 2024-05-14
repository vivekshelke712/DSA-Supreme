#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the total no of rows" << endl;
    cin >> rows;
    cout << "ENtr the total number of columns " << endl;
    cin >> cols;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {

            if (row == 0 || row == rows - 1 || col == 0 || col == cols - 1)
            {
                cout << "* ";
            }
            else
            {

                // if (col == 0 || col == cols - 1)
                // {
                //     cout << "* ";
                // }
                // else
                // {

                cout << "  ";
                // }
            }
        }

        cout << endl;
    }

    return 0;
}
