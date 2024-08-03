#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert_at_tail(Node * &head , int data)
{
    Node * newNode = new Node(data);
    if(head == NULL)
    {
        head = newNode;
        cout<<endl<<"Insert at Head"
        <<endl<<endl;
    }
    else
    {
        Node * temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        cout<<endl<<"Insert at tail"<<endl<<endl;
    }
}
void print_linked_list(Node *head)
{
    cout<<endl;
    cout<<"Your linked list : ";
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void insert_at_position(Node * &head,int pos,int val)
{
    Node * newNode = new Node(val);
    Node * temp = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout<<endl<<"Inserted at position "<<pos<<endl<<endl;
}
int main()
{
    Node * head = NULL;
    while (true)
    {
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2: Print linked list"<<endl;
        cout<<"Option 3: Insert any positon"<<endl;
        cout<<"Option 4: Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please enter value : ";
            int data;
            cin>>data;
            insert_at_tail(head,data);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            cout<<endl;
            cout<<"Enter position : ";
            int pos;
            cin>>pos;
            cout<<"Enter value : ";
            int val;
            cin>>val;
            insert_at_position(head,pos,val);
        }
        else if(op==4)
        {
            break;
        }
    }
    
    return 0;
}