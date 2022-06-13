//Program that prompts the user for a file name and returns the number of vowels
//Written by Jake Barklund
//October 2019
//Language: C++
//CodeBlocks
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    int vowels=0;
    int i=0;
    string inputname, inputWords, x, r;
    cout<<"Enter a valid filename: ";
    cin>>inputname;
    ifstream filename(inputname.c_str());
    filename.is_open();
    while(filename>>inputWords){
        for(int i=0; i<=inputWords.length(); i++){
            if(inputWords[i]=='a' || inputWords[i]=='e' || inputWords[i]=='i' ||
                inputWords[i]=='o' || inputWords[i]=='u' || inputWords[i]=='A' ||
                inputWords[i]=='E' || inputWords[i]=='I' || inputWords[i]=='O' ||
                inputWords[i]=='U'){
                    vowels++;
            }
        }
    }
    cout<<vowels<<endl;
    filename.close();
    return 0;
}
