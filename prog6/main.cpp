/*
    Code that will ask the user for the amount of dooflingies then proceed to stack them, display highest and lowest, show the levels whether they rose or fell, and shows total number of dooflingies
    Written by Jake Barklund
    December 2019
    CodeBlocks
    Language c++
*/
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector <int> v;
    int input,x,y,z;

    for(int i=0; i<10; i++){
        cout<<"How many dooflingies were produced today? : ";
        cin>>input;
        v.push_back(input);
    }

    x=*max_element(v.begin(), v.end());
    y=accumulate(v.begin(), v.end(),0);
    z=*min_element(v.begin(), v.end());

    cout<<endl;

    cout<<"The highest day is: "<<x<<endl;
    cout<<"The average of all the days is: "<<y/10<<endl;
    cout<<"The lowest day is: "<<z<<endl;

    cout<<endl;

    cout<<"Daily rise and fall: "<<endl;
    for(int i=0; i<10; i++){
        v[i-1]=0;
        cout<<v[i]-v[i-1]<<endl;
    }

    cout<<endl;

    cout<<"Total number of dooflingies sold over the 10 days: "<<y<<endl;
}
