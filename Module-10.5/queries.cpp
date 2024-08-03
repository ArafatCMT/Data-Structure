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
void insert_position(Node *&head,Node *&tail,int pos,int val)
{
    Node *newNode = new Node (val);
    //insert head and tail
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    //insert head
    if(pos == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    Node * tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next; 
    }
    //insert tail
    if(tmp->next == NULL)
    {
        tmp->next = newNode;
        newNode->prev = tmp;
        tail = newNode;
        return;
    }
    //insert specific position;
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}
void print_normal(Node *head)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
    Node * tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp =tmp->prev;
    }
    cout<<endl;
}
int size (Node *head)
{
    Node * tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int Q;
    cin>>Q;
    while (Q--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos <= size(head))
        {
            insert_position(head,tail,pos,val);
            print_normal(head);
            print_reverse(tail);
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
    
    return 0;
}