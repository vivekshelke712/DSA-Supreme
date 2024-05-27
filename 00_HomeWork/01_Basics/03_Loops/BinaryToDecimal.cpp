#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int num;
    cout << "Enter a binary number to convert it" << endl;
    cin >> num;
    int decimal = 0;
    int rem = 0;
    int position = 0;
    while (num > 0)
    {
        rem = num % 10;
        if (rem == 1)
        {
            decimal = decimal + pow(2, position);
        }
        num = num / 10;
        position++;
    }
    cout << "decimal number is " << decimal << endl;
    return 0;
}