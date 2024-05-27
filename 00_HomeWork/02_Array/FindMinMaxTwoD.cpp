#include <iostream>
using namespace std;

pair <int,int> findMIN(int arr[4][4],int rowSize,int colSize){
    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    for(int row = 0; row < rowSize; row++)
    {
        for(int col = 0; col < colSize; col++)
        {
            minValue = min(arr[row][col],minValue);
            maxValue = max(arr[row][col],maxValue);
        }
        
    }
    return make_pair(minValue,maxValue);
}

int main() {
          
    int arr[4][4] = {
        {12,34,56,76},
        {77,34,87,33},
        {12,35,87,34},
        {12,33,100,10}
    };
    pair<int,int> ans = findMIN(arr,4,4);
    cout <<"The min Value is " << ans.first <<endl;
    cout <<"The max Value is " << ans.second <<endl;
    return 0;
}