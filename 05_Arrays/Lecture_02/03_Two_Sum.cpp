#include <iostream>
using namespace std;
void TwoSum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == 35)
            {
                cout << arr[i] << " " << arr[j] << " " << endl;
                        }
        }
    }
}
int main()
{
    int arr[] = {10, 5, 20, 15, 30};
    TwoSum(arr, 5);

    return 0;
}