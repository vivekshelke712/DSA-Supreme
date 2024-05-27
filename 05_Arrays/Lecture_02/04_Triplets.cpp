#include <iostream>
using namespace std;
void PrintAllTriplets(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < n; k++)
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
            }
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    PrintAllTriplets(arr, n);

    return 0;
}