#include <iostream>
using namespace std;

void fun(int a[],int n){
    for(int i = 0; i < n; i++)
    {
        cout <<a[i] <<endl;
    }
    
}
int main()
{
    int n ;
    cout << "Enter the size of array" <<endl;
    cin >> n;
    int *arr = new int[n]; // for Dynamically creating array
    for(int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr[i] = data ;  
    }
    fun(arr,n);
    
    return 0;
}