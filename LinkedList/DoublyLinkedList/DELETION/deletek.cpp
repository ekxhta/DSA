#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node* back;
    Node* next;

    public:
    Node(int data1)
    {
        data=data1;
        back=nullptr;
        next=nullptr;
    }

    Node(int data1, Node* back1, Node* next1)
    {
        data=data1;
        back=back1;
        next=next1;
    }
};

Node* ArrtoLL(vector<int> arr)
{
    Node* head=new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i],mover,nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int main()
{
    vector<int> arr={2,4,6,7};
    Node* head= ArrtoLL(arr);

}