#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * next;
        Node * prev;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node * newNode = new Node (val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        cout<<endl<<"Inserted Head"<<endl<<endl;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        cout<<endl<<"Inserted Tail"<<endl<<endl;
    }
}
void Print_normal(Node *head)
{
    Node *tmp = head;
    cout<<"normal print : ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void Print_reverse(Node *tail)
{
    cout<<"reverse print : ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl<<endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_any_position(Node *head,int pos,int val)
{
    Node *newNode = new Node (val);
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}
void insert_head(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node (val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    cout<<endl<<"Inserted Head"<<endl<<endl;
}
void delete_position(Node *head,int pos)
{
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = deleteNode->next;
    deleteNode->next->prev = tmp;
    delete deleteNode;
    cout<<"delete position "<<pos<<endl;
}
void delete_tail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
    cout<<endl<<"delete tail"<<endl;
}
void delete_head(Node *&head,Node *&tail)
{
    if(head==NULL)
    {
        cout<<endl<<"Invalid"<<endl;
    }
    else if(head->next == NULL)
    {
        Node *delNode = head;
        head = NULL;
        tail = NULL;
        delete delNode;
        cout<<endl<<"delete head"<<endl;
    }
    else
    {
        Node *delNode = head;
        head = head->next;
        delete delNode;
        head->prev = NULL;
        cout<<endl<<"delete head"<<endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int op;
    while (true)
    {
        cout<<"Option 1:insert at tail"<<endl;
        cout<<"Option 2:print doubly linked list"<<endl;
        cout<<"Option 3:insert any position"<<endl;
        cout<<"Option 4:delete position"<<endl;
        cin>>op;
        if(op==1)
        {
            int val;
            cout<<"enter value : ";
            cin>>val;
            insert_at_tail(head,tail,val);
        }
        else if(op==2)
        {
            Print_normal(head);
            Print_reverse(tail);
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"enter position : ";
            cin>>pos;
            cout<<"enter value : ";
            cin>>val;
            if(pos==0)
            {
                insert_head(head,tail,val);
            }
            else if(pos >= size(head))
            {
                cout<<endl<<"Invalid"<<endl;
            }
            else
            {
                insert_any_position(head,pos,val);
            }
        }
        else if(op==4)
        {
            int pos;
            cout<<"enter position : ";
            cin>>pos;
            if(pos==0)
            {
                delete_head(head,tail);
            }
            else if(pos == size(head)-1)
            {
                delete_tail(tail);
            }
            else if(pos >= size(head))
            {
                cout<<endl<<"Invaild"<<endl;
            }
            else
            delete_position(head,pos);
        }
    }
    
    return 0;
}