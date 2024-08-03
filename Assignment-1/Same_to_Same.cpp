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
bool same_to_same(Node *head1,int node1,Node *head2,int node2)
{
    bool flag = true;
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while (tmp1 != NULL and tmp2 != NULL)
    {
        if(tmp1->val != tmp2->val)
        {
            flag = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return flag;
    
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        Input_linked_list(head1,tail1,val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int v;
    while (true) 
    {
        cin>>v;
        if(v==-1)
        {
            break;
        }
        Input_linked_list(head2,tail2,v);
    }
    int node1 = size(head1);
    int node2 = size(head2);
    
    if(node1 == node2)
    {
        bool flag = same_to_same(head1,node1,head2,node2);
        (flag==true)? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}