#include <iostream>
using namespace std;

void printAllPair(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Pair" << arr[i] << " " << arr[j] << endl;
        }
    }
}
int main()
{

    int arr[] = {10, 20, 30, 40};
    printAllPair(arr, 4);

    return 0;
}