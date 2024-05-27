#include <iostream>
using namespace std;
int main() {
     int arr[4][3] = {
        {99, 95,56},
        {98 ,77 ,55},
        {44, 65,13},
        {33,57,97}
     };
    int target = 65;
     for(int row = 0; row < 4; row++){
        for(int col = 0; col < 3; col++)
        {
            if(arr[row][col] == target ){
                cout << "element found at " << " " << row  << " " << col <<" "; 
            }
        }
        
     }
     
        

    return 0;
}