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

Node* deleteNode(Node* head,int k)
{
    int deletedEl;
    if(head==NULL)
    {
        return head;
    }
    if(k==1)
    {
        Node* temp=head;
        head=head->next;
        deletedEl=temp->data;
        free(temp); 
        return head;
    }
    int count=0;
    Node* temp= head ;
    Node* prev=NULL;

    while(temp!=NULL)
    {
        count++;
        if(count==k)
        {
            prev->next=prev->next->next;
            deletedEl=temp->data;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    } 
    cout<<"Deleted element :"<< deletedEl <<endl;
    return head;
}
int main()
{
    vector<int> arr={3,6,9,12};

    Node* head= ArrtoLL(arr);
    traversal(head);
    cout<<endl;

    int k;
    cout<<"Enter a node number to be deleted: ";
    cin>>k;

    head =deleteNode(head,k);
    traversal(head);

     return 0;
}