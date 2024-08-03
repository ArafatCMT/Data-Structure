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
void insert_at_tail(Node * &head,int data)
{
    Node * newNode = new Node (data);
    if(head == NULL)
    {
        head = newNode;
        cout<<endl<<"Insert at head"<<endl<<endl;
    }
    else
    {
        Node * tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
        cout<<endl<<"Insert at tail"<<endl<<endl;
    }
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout<<"Your linked list : ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_linked_list(Node * &head,int pos,int val)
{
    Node *newNode = new Node (val);
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<endl<<"Inserted at Position "<<pos<<endl<<endl;
}
void insert_at_head(Node *&head,int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted at Head"<<endl<<endl;
}
int main()
{
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);

    // head->next = a;
    // a->next = b;
    Node * head = NULL;

    while (true)
    {
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print Linked List"<<endl;
        cout<<"Option 3: Insert at any Position"<<endl;
        cout<<"Option 4: Insert at Head"<<endl;
        cout<<"Option 5: Terminate"<<endl;
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
            cout<<"Enter positon : ";
            int pos;
            cin>>pos;
            cout<<"Enter value : ";
            int val;
            cin>>val;
            if(pos==0)
            {
                insert_at_head(head,val);
            }
            else 
            {
                print_linked_list (head,pos,val);
            }
        }
        else if(op==4)
        {
            int v;
            cout<<"Enter value : ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if(op==5)
        {
            break;
        }
    }
    return 0;
}