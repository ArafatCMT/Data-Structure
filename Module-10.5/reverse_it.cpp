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
void input_list(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node (val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void reverse_it(Node *head,Node *tail)
{
    Node * i = head;
    Node * j = tail;
    while (i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val,j->val);
}
void display(Node * head)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        input_list(head,tail,val);
    }
    reverse_it(head,tail);
    display(head);
    return 0;
}