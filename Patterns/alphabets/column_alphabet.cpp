// To achieve the pattern :
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e
// a b c d e

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the no of rows :";
    cin>>n;

    cout<<"Enter the no of columns :";
    cin>>m;

    for(int row=0;row<5;row++)
    {
        for(int col=0;col<n;col++)
        {
            char name='a'+col;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}