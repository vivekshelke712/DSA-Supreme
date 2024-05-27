#include <iostream>
using namespace std;

void SolidRectangle(){
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << "*" << " ";
        }
        cout <<endl;
        
    }
    
}

void hallowRectangle() {
    for(int i = 0; i < 4 ; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i== 0 || i==3 || j== 0 || j ==3){
                cout <<"*" << " ";
            }
            else{
                cout << " " << " ";
            }
        }
        cout <<endl;
        
    }
    
}

void rightAngleTriangle() {
    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* " << " ";
        }
        cout <<endl;
        
    }
    
}
void invertedRightAngleTriangle() {
    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << "* " << " ";
        }
        cout <<endl;
        
    }
    
}
void pyramidPattern() {
    for(int i = 0; i < 7; i++)
    {
        // for Spaces
        for (int s = 0; s < 7 - i - 1; s++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* " << " ";
        }
        cout <<endl;        
    }
    
}
void inversePyramid() {
    for(int i = 0; i < 7; i++)
    {
        // for Spaces
         for (int s = 0; s < i  ; s++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < 7 - i - 2; j++)
        {
            cout << "* " << " ";
        }
       
        cout <<endl;        
    }
    
}
// Pyramid try it again
void diamondPattern(){
    pyramidPattern();
    inversePyramid();
}

int main() {
        // SolidRectangle(); 
        // hallowRectangle(); 
        // rightAngleTriangle();
        // invertedRightAngleTriangle();
        // pyramidPattern();
        // inversePyramid();
        diamondPattern();

    return 0;
}