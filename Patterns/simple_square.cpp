// To achieve the pattern :
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no of rows and columns :";
    cin>>n;

    for(int row=0;row<n;row++)
    {
        for(int column = 0;column<n;column++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}