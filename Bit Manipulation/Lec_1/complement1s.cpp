#include<iostream>
#include<string>

using namespace std;

string complement1s(string x)
{
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='0')
            x[i]='1';
        else
            x[i]='0';
    }
    return x;
}
int main()
{
    string num;
    cout<<"Enter number for finding 1s complement : ";
    cin>>num;

    cout<<"1s complement of "<<num<<" : "<<complement1s(num);
    return 0;
}