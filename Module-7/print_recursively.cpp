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
void Input_linkde_list(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node(val);
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
void Print_recursion(Node *node)
{
    if(node == NULL)
    {
        return ;
    }
    cout<<node->val<<" ";
    Print_recursion(node->next);
}
void Print_reverse(Node *node)
{
    if(node == NULL)
    {
        return ;
    }
    Print_reverse(node->next);
    cout<<node->val<<" ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        Input_linkde_list(head,tail,val);
    }
    Print_recursion(head);
    cout<<endl;
    Print_reverse(head);
    return 0;
}