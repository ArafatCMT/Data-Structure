#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node *prev;
        Node *next;
        Node(int val)
        {
            this->val = val;
            this->prev = NULL;
            this->next = NULL;
        }
};
void Print_normal (Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<< " ";
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
void delete_any_position(Node *head,int pos)
{
    Node *tmp = head ;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = deleteNode->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}
void delete_tail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *tail = head;
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *d = new Node(50);
    // Node *tail = d;

    // create link
    // head->next = a;
    // a->prev = head;

    // a->next = b;
    // b->prev = a;

    // b->next = c;
    // c->prev = b;

    // c->next = d;
    // d->prev = c;
    int pos;
    cin>>pos;
    if(pos >= size(head))
    {
        cout<<"Invaild"<<endl;
    }
    else if(pos==0)
    {
        delete_head(head);
    }
    else if(pos == size(head) - 1)
    {
        delete_tail(tail);
    }
    else
    {
        delete_any_position(head,pos);
    }
    Print_normal (head);
    Print_reverse(tail);
    return 0;
}