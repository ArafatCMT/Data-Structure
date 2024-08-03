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
void Insert_at_Tail(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node (val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        cout<<endl<<"Inserted Head"<<endl<<endl;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
        cout<<endl<<"Inserted Tail"<<endl<<endl;
    }
}
void Print_Linked_List(Node *head)
{
    Node *tmp = head;
    cout<<endl<<"Your Linked List : ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}
void Insert_any_Position(Node *head,int pos,int val)
{
    Node *newNode = new Node (val);
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<endl<<"Insert at Position "<<pos<<endl<<endl;
}
void Insert_Head(Node *&head,int val)
{
    Node *newNode = new Node (val);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted Head"<<endl<<endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    for(Node *i=head; i!=NULL; i=i->next)
    {
        cnt++;
    }
    return cnt;
}
void Delete_from_Position(Node *head,int pos)
{
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted Position "<<pos<<endl<<endl;
}
void Delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<endl<<"Deleted Head"<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print_Linked_List"<<endl;
        cout<<"Option 3: Insert any Position"<<endl;
        cout<<"Option 4: Delete from Position"<<endl;
        cout<<"Option 5: Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please enter value : ";
            int val;
            cin>>val;
            Insert_at_Tail(head,tail,val);
        }
        else if (op==2)
        {
            Print_Linked_List(head);
        }
        else if(op==3)
        {
            cout<<"Enter Position : ";
            int pos;
            cin>>pos;
            cout<<"Enter value : ";
            int val;
            cin>>val;
            if(pos > size(head))
            {
                cout<<endl<<"Invalid Index"<<endl<<endl;
            }
            else if(pos==0)
            {
                Insert_Head(head,val);
            }
            else
            {
                Insert_any_Position(head,pos,val);
            }
        }
        else if(op==4)
        {
            cout<<"Enter Position : ";
            int pos;
            cin>>pos;
            if(pos >= size(head))
            {
                cout<<endl<<"Invalid Index"<<endl<<endl;
            }
            else if(pos==0)
            {
                Delete_head(head);
            }
            else
            {
                Delete_from_Position(head,pos);
            }
        }
        else if(op==5)
        {
            break;
        }
    }
    
    return 0;
}