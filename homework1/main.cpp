//Program to search for value inside a matrix
//Written by Jake Barklund
//September 11th 2019
//Language C++
//Written in CodeBlocks

#include <iostream>
#include <stdio.h>
#include <cassert>

using namespace std;

int main(void){
    int matrix1[3][3] = {{5,10,15},{20,25,30},{35,40,45}};
    int inputvalue;
    int x=1;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix1[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"Enter any integer: "<< endl;
    cin>>inputvalue;

    for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(matrix1[i][j]==inputvalue){
                    x=0;
                    cout<<inputvalue<<" is inside the matrix";
                }
            }
    }
    if(x==1){
        cout<<inputvalue<<" is not inside the matrix";
    }
}
