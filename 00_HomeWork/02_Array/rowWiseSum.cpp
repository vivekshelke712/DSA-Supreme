#include <iostream>
using namespace std;
int main() {
     int arr[4][4] = {
        {1,2,3,4},
        {4,4,4,5},
        {12,35,87,34},
        {12,33,100,10}
    };   

        int sum = 0;
    for(int row = 0; row < 4; row++)
    {
        for(int col = 0; col < 4; col++)
        {
        //    sum = sum+ arr[col][row] ; col wise Sum
        //    sum = sum+ arr[row][col] ; row wise Sum
        // Diagonal Sum
        if(row == col ){
            sum = sum + arr[row][col];
        }

        }
        // cout <<"the sum of " <<row << "th row is " <<sum <<endl;

        
    }
        cout <<"the Diagonal sum is "<< sum << endl;

    return 0;
}