#include<iostream>
#include<vector>
using namespace std;

class Node
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

Node* ArrtoLL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover= head;

    for(int i=1;i<arr.size();i++)
    {
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int main()
{
    vector<int> arr={4,2,1,6};
    Node* head= ArrtoLL(arr);
    cout<<head->data;
    
}