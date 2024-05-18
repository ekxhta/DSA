// To achieve the pattern :
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter no of rows:";
    cin>>n;
    cout<<"Enter no of columns:";
    cin>>m;

    for(int row=0;row<n;row++)
    {
        for(int col=1;col<=m;col++)
        {
            cout<<col*col<<" ";
        }
        cout<<endl;
    }
    return 0;
}