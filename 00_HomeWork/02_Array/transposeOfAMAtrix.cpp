#include <iostream>
using namespace std;


int main() {
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int newArr[4][4];
    for (int row = 0; row < 4; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            newArr[col][row] = arr[row][col];
        }
        
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout <<  newArr[i][j] << " " ;
        }
        cout <<endl;
        
    }
    

    return 0;
}