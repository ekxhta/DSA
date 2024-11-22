#include<iostream>
#include<vector>

using namespace std;

struct Node
{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

int main()
{
    vector<int> arr ={2,5,4,6};

    Node* y= new Node(arr[0],nullptr);
    cout<<"y : "<<y<<endl;
    cout<<"y->data:"<<y->data;


    Node x = Node(arr[0]);
    cout<<"x.data"<<x.data;



}