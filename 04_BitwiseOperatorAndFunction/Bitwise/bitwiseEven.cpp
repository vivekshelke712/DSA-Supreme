#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    if ((num & 1) == 0)
    {
        cout << "The number is even";
    }
    else
    {
        cout << "The number is odd";
    }
    return 0;
}
