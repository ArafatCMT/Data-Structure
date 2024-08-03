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
void insert_head(Node *&head,Node *&tail,int val)
{
    Node * newNode = new Node (val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_tail(Node *&tail,int val)
{
    Node * newNode = new Node (val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insert_position(Node *head,int pos,int val)
{
    Node * newNode = new Node (val);
    Node * tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}
void print_left(Node *head)
{
    cout<<"L -> ";
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_right(Node *tail)
{
    cout<<"R -> ";
    Node * tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0;
    int Q;
    cin>>Q;
    while (Q--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos > sz)
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            if(pos==0)
            {
                insert_head(head,tail,val);
                sz++;
            }
            else if(pos == sz)
            {
                insert_tail(tail,val);
                sz++;
            }
            else
            {
                insert_position(head,pos,val);
                sz++;
            }
            print_left(head);
            print_right(tail);
        }
        
    }
    
    return 0;
}