//k needs to be k = (1-n+1)
//edge case 1 : empty linked list and node to be inserted at k=1, new node at head is created.
// edge case 2 : if k==1 then insertion for head is followed
//edge case 3:  if k== size of linked list +1


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

Node* insertk(Node* head, int value , int k)
{
    if(head==NULL)
    {
        if(k==1)
        {
            return new Node(value); 
        }
        else
        return head;
    }
    if(k==1)
    {
        Node* temp = new Node(value,head);
        return temp;
    }
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        count++;
        if(count==k-1)
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

    int k,value;
    cout<<"Enter the VALUE to be inserted and the NODE in which it is to be inserted  : ";
    cin>>value>>k;

    head=insertk(head,value,k);
    traversal(head);


    return 0;
}