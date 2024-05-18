#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter n :";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            flag=0;
        }
        else 
        flag=1;
    }

    if(flag)
    {
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }
}