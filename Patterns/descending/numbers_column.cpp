// To achieve the pattern:
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter no of rows :";
    cin>>n;
    cout<<"Enter no of Columns:";
    cin>>m;

    for(int row=n;row>0;row--)
    {
        for(int col=m;col>0;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}