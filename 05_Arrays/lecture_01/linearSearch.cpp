#include <iostream>
using namespace std;

// void linearSearch(int arr[], int n, int num)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == num)
//         {
//             cout << "The element is found at " << i + 4 << "th index " << endl;
//         }
//     }
// }

int maxNumber(int arr[], int n)
{
    int Largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > Largest)
        {
            Largest = arr[i];
        }
    }
    return Largest;
}

int countZeroAndOne(int arr[], int n)
{
    int countZero = 0;
    int countOne = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        else if (arr[i] == 1)
        {
            countOne++;
        }
    }
    cout << "The Total number of zero in an array is " << countZero << " the Total number of one in array is " << countOne << endl;
}

int extremePrinting(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        cout << arr[start] << " ";
        start++;
        cout << arr[end] << " ";
        end--;
    }
}
int main()
{
    int arr[] = {12, 54, 45, 344, 56, 67};
    // int arr[] = {0, 1, 0, 1, 1, 1, 0, 1, 0};
    int n = 6;
    int num = 34;
    extremePrinting(arr, n);
    // countZeroAndOne(arr, n);
    // linearSearch(arr, n, num);
    // int ans = maxNumber(arr, n);
    // cout << "The Largest number is " << ans << endl;
    return 0;
}