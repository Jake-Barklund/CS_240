//Program that adds two matrices together
//Written by Jake Barklund
//September 24th 2019
//Language C++
//Written in CodeBlocks
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x,y;
    int input1[2][2];
    int input2[2][2];
    int finalmatrix[2][2];
    for(int row=0; row<2; row++){
        for(int col=0; col<2; col++){
            cout<<"Enter a number for matrix 1: ";
            cin>>x;
            input1[row][col] = x;
        }
    }
    cout<<endl;
    cout<<"Matrix 1"<<endl;
    cout<<endl;
    for(int x=0; x<2; x++){
        for(int y=0; y<2; y++){
            cout<<input1[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int row=0; row<2; row++){
        for(int col=0; col<2; col++){
            cout<<"Enter a number for matrix 2: ";
            cin>>y;
            input2[row][col] = y;
        }

    }
    cout<<endl;
    cout<<"Matrix 2"<<endl;
    cout<<endl;
    for(int x=0; x<2; x++){
        for(int y=0; y<2; y++){
            cout<<input2[x][y]<<" ";
        }
        cout<<endl;
    }
    for(int x=0; x<2; x++){
        for(int y=0; y<2; y++){
            finalmatrix[x][y] = input1[x][y] + input2[x][y];
        }
    }
    cout<<endl;
    cout<<"Matrix 1 + Matrix 2"<<endl;
    cout<<endl;
    for(int x=0; x<2; x++){
        for(int y=0; y<2; y++){
            cout<<finalmatrix[x][y]<<" ";
        }
        cout<<endl;
    }
}
