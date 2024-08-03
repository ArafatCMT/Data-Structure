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
void insert_at_tail(Node *&head,Node *&tail,int data)
{
    Node *newNode = new Node(data);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void insert_head(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node (val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void delete_position(Node *head,Node *&tail,int pos)
{
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    if(tmp->next->next == NULL)
    {
        tail = tmp;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    int q;
    cin>>q;
    while (q--)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            insert_head(head,tail,v);
            sz++;
        }
        else if(x==1)
        {
            insert_at_tail(head,tail,v);
            sz++;
        }
        else if(x==2)
        {

            if(v==0)
            {
                if(head != NULL)
                {
                    delete_head(head);
                    sz--;
                }
            }
            else if(v < sz)
            {
                if(head != NULL)
                {
                    delete_position(head,tail,v);
                    sz--;
                }
            }
        }
        print_linked_list(head);
    }
    return 0;
}