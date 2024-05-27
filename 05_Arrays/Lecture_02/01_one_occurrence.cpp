#include <iostream>
using namespace std;
int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{

    int arr[7] = {5, 2, 2, 4, 4, 5, 7};
    // int ans = 0;
    int size = 7;

    int ans = findUnique(arr, size);
    cout << "The unique element is " << ans << endl;

    return 0;
}