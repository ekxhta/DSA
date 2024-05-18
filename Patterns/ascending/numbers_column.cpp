// To achieve the pattern: 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main()
{
    int n,m;

    cout<<"Enter the no of rows : ";
    cin>>n;

    cout<<"Enter no of columns : ";
    cin>>m;

    for(int rows=0;rows<n;rows++)
    {
        for(int col=1;col<=m;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}