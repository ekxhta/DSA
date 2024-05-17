//  To achieve the pattern :
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3 
// 4 4 4 4 4

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter no of rows : ";
    cin>>n;

    cout<<"Enter No of columns : ";
    cin>>m;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=m;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}