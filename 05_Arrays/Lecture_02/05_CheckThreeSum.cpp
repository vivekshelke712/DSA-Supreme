#include <iostream>
using namespace std;
bool checkThreeSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << endl;
                                }
            }
        }
    }
}
int main()
{
    int arr[] = {20, 30, 40, 50, 60, 50};
    checkThreeSum(arr, 6, 150);
    return 0;
}