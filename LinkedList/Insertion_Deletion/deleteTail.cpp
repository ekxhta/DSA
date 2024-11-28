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

Node* ArrtoLL(vector<int>arr)
{
    Node* head = new Node(arr[0]);
    Node* mover= head;

    for(int i =1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void traversal(Node* head)
{
    Node*temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


Node* deleteTail(Node* head)
{
   Node* temp=head;
   if(head==nullptr||head->next==nullptr)
   {
    return nullptr;
   }
   while(temp->next->next!=nullptr)
   {
    temp=temp->next;
   }
   free(temp->next);
   temp->next=nullptr;
   return head;
}


int main()
{
    vector<int> arr={2,4,6,8};
     Node* head= ArrtoLL(arr);
    cout<<"Original Linked list head : "<< head->data<<endl;

    cout<<"Traversal : ";
    traversal(head);
    cout<<endl;

    Node* newHead=deleteTail(head);
    cout<<"New Linked list head : "<<newHead->data<<endl;

    cout<<"Traversal : ";
    traversal(newHead);
    cout<<endl;

    return 0;

}