#include <iostream>

using namespace std;

#include "Stack.h"

int main()
{
    int x, n, d=2;
    cout<<"Enter a number larger than 1: "<<endl;
    cin>>n;
    Stack s;
    while(n>1){
        if(n%d==0){
            n = n/d;
            s.push(d);
        }
        else{
            d++;
        }
    }
    x=s.top();
    s.pop();
    cout<<x;
    while(!s.empty()){
        x=s.top();
        s.pop();
        cout<<" * "<<x;
    }
}
