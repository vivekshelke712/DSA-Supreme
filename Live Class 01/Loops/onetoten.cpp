#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        else
        {
            cout << 3 * i << endl;
        }
    }
    return 0;
}