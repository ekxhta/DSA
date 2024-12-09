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


Node* deleteNode(Node* head, int k) {
    if (!head) {
        cout << "The list is empty." << endl;
        return head;
    }
    if (k <= 0) {
        cout << "Invalid position." << endl;
        return head;
    }

    if (k == 1) {
        Node* temp = head;
        head = head->next;
        if (head) head->back = nullptr; 
        cout << "Deleted element: " << temp->data << endl;
        delete temp; 
        return head;
    }

    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < k) {
        temp = temp->next;
        count++;
    }

    if (!temp) {
        cout << "Position out of bounds." << endl;
        return head;
    }


    if (temp->back) 
        temp->back->next = temp->next;
    if (temp->next)
        temp->next->back = temp->back;

    cout << "Deleted element: " << temp->data << endl;
    delete temp; 
    return head;
}


int main()
{
    vector<int> arr={2,4,6,7};
    Node* head= ArrtoLL(arr);


    int k;
    cout << "Enter the position to delete: ";
    cin >> k;

    head = deleteNode(head, k);
   

}