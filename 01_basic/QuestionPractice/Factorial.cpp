#include <iostream>
using namespace std;

int main()
{

    int num = 6;
    int fact = 1;
    while (num != 1)
    {
        fact = fact * num;
        num--;
    }
    cout << fact;

    return 0;
}