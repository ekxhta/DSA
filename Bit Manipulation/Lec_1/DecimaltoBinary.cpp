#include<iostream>
#include <algorithm>
#include<string>
using namespace std;

string Decimal2Binary(int n)
{
    string binary="";
    while(n>1)
    {
        binary+=to_string(n%2);
        n=n/2;
    }
    binary+='1';
    reverse(binary.begin(),binary.end());
    return binary;
}
int main()
{
    int n;
    cout<<"Enter decimal number :";
    cin>>n;
    
    string binary = Decimal2Binary(n);
    cout<<binary;

}