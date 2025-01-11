#include<iostream>
#include<string>
using namespace std;

int Binary2Decimal(string binary)
{
    int num=0,p2=1;
    int len=binary.size();
    for(int i=len-1;i>=0;i--)
    {   if(binary[i]=='1')
            num+=p2;
        p2*=2;
    }
    return num;
}

int main()
{
    string binary;
    cout<<"Enter Binary string :";
    cin>>binary;

    int decimal;
    decimal=Binary2Decimal(binary);
    cout<<"Decimal is : "<<decimal;


    return 0;
}