#include <iostream>
using namespace std;

void print(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << 1 + i << endl;
    }
}
int main()
{
    int arr[5];
    int size = 5;
    print(arr, size);
}