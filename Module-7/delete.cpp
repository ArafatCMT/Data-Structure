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
void input_function(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node (val);
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
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void delete_node(Node *head,int pos)
{
    Node * tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
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
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        input_function(head,tail,val);
    }
    int sz = size(head);
    print(head);
    int pos;
    cin>>pos;
    if(pos >= sz)
    {
        cout<<"Invalid index"<<endl;
    }
    else if(pos==0)
    {
        delete_head(head);
    }
    else
    delete_node(head,pos);
    print(head);
    return 0;
}