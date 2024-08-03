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
void insert_at_position(Node *head,int pos,int val)
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
void Print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void Print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
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
}
void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node (val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // Node *head = new Node (10);
    // Node *a = new Node (20);
    // Node *b = new Node (30);
    // Node *c = new Node (40);
    // Node *d = new Node (50);
    // Node *tail = d;

    // // connection 
    // head->next = a;
    // a->prev = head;

    // a->next = b;
    // b->prev = a;

    // b->next = c;
    // c->prev = b;

    // c->next = d;
    // d->prev = c;

    // int sz = size(head);

    int pos,val;
    cin>>val;
    insert_at_tail(head,tail,val);
    // if(pos == 0)
    // {
    //         insert_head(head,tail,val);
    // }
    // else if(pos == sz)
    // {
    //     insert_at_tail(head,tail,val);
    // }
    // else if(pos>=sz)
    // {
    //     cout<<"Invalid"<<endl;
    // }
    // else
    // {
    //     insert_at_position(head,pos,val);
    // }
    Print_normal(head);
    Print_reverse(tail);
    return 0;
}