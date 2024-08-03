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
void Input_linked_list(Node *&head,Node *&tail,int val)
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
int minimum(Node *head)
{
    int min = INT_MAX;
    for(Node *i=head; i!=NULL; i=i->next)
    {
        if(i->val < min)
        {
            min = i->val;
        }
    }
    return min;
}
int maximum(Node *head)
{
    int max = INT_MIN;
    for(Node *i=head; i!=NULL; i=i->next)
    {
        if(i->val > max)
        {
            max = i->val;
        }
    }
    return max;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        Input_linked_list(head,tail,val);
    }
    int min = minimum(head);
    int max = maximum(head);
    cout<<max-min<<endl;
    return 0;
}