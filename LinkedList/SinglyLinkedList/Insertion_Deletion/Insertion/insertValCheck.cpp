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
        next= nullptr;
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
    Node* mover= head;
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
        cout<<temp->data<< " ";
        temp=temp->next;
    }
}

Node* insertVal(Node* head, int value , int kval)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->data==kval)
    {
        Node* temp = new Node(value,head);
        return temp;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->next->data==kval)
        {
            Node* newNode = new Node(value,temp->next);
            temp->next= newNode;
            break;
        }
        temp=temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr={2,4,6,8};
    Node* head=ArrtoLL(arr);
    traversal(head);
    cout<<endl;

    int kval,value;
    cout<<"Enter the VALUE to be inserted and the NODE VALUE before which it is to be inserted  : ";
    cin>>value>>kval;

    head=insertVal(head,value,kval);
    traversal(head);


    return 0;
}