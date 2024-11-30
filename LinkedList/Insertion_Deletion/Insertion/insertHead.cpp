#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node (int data1)
    {
        data=data1;
        next=nullptr;
    }
    Node(int data1, Node* next1)
    {
        data=data1;
        next=next1;
    }
};


Node* ArrtoLL(vector<int> arr)
{
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}


void traversal(Node* head)
{
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* insertHead(Node* head, int value)
{
    Node* temp=new Node(value,head);
    return temp;
}

int main()
{
    vector<int> arr={3,6,9,12};
    Node* head=ArrtoLL(arr);

    int val;
    cout<<"Enter value for new head node: ";
    cin>>val;

    head=insertHead(head,val);
    traversal(head);
    return 0;

    
}