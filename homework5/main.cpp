//Program that receieves a string of characters and determines if it is a palindrome
//Written by Jake Barklund
//November 12 2019
//Language C++
//CodeBlocks
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    string input,x,y;
    int z=1;
    stack <int> s;
    queue <int> q;
    cout<<"Enter any string of characters."<<endl;
    getline(cin, input);
    for(int i=0; i<input.size(); i++){
        s.push(input[i]);
        q.push(input[i]);
    }
    while(s.empty()==false&&z==1){
        if(s.top()==q.front()){
            s.pop();
            q.pop();
            if(s.empty()&q.empty()){
                cout<<"This is a Palidrome";
            }
        }
        else{
            cout<<"Not a Palidrome";
            z=0;
        }
    }
}
