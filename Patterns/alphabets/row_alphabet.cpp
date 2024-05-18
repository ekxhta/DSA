// To achieve the pattern :
// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter no of rows:";
    cin>>n;

    cout<<"Enter no of columns:";
    cin>>m;

    for(char row=0;row<n;row++)
    {
        char name='a'+(row);
        for(int col=0;col<m;col++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}