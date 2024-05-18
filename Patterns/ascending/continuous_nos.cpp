// To achieve the pattern

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter no of rows : ";
    cin>>n;
    cout<<"Enter no of columns : ";
    cin>>m;
    int count=1;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<m;col++)
        {
            cout<<count<<" ";
            count++;
        }
        
        cout<<endl;
    }
}