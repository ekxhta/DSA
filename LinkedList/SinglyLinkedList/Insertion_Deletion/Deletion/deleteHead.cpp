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
    Node(int data1, Node* next1)
    {
        data=data1;
        next=next1;
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

Node* deleteHead(Node* head)
{
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}

void traversal(Node* head)
{
    Node*temp=head;
    while(temp) // while temp exists
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    vector<int> arr={0,2,4,6,8};
    Node* head= ArrtoLL(arr);
    cout<<"Original Linked list head : "<< head->data<<endl;

    cout<<"Traversal : ";
    traversal(head);
    cout<<endl;

    Node* newHead=deleteHead(head);
    cout<<"New Linked list head : "<<newHead->data<<endl;

    return 0;

}