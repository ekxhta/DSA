#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1)
    {
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
        back=nullptr;
    }

};

Node* ArrtoDLL(vector<int>arr)
{
    Node* head= new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp= new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void traversal(Node * head)
{
    Node* temp= head;
    while(temp)
    {
        cout<<temp->data << " ";
        temp=temp->next;
    }
}

int main()
{
    vector<int> arr={12,5,8,7};
    Node* head= ArrtoDLL(arr);
    traversal(head);

    return 0;
}