#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }

    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
};

int length(Node* head)
{
    int length=0;
    Node* temp =head;
    while(temp->next!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        length++;
    }
    return length;
}

Node* ArrtoLL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover= head;

    for(int i=0;i<arr.size();i++)
    {
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int main()
{
    vector<int> arr={1,2,3,4};
    Node* head= ArrtoLL(arr);
    return length(head);
    return 0;
}
