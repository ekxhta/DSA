//To achieve the pattern:
//  5 5 5 5 5
// 4 4 4 4 4
// 3 3 3 3 3
// 2 2 2 2 2
// 1 1 1 1 1
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
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}