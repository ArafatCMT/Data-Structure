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
void input_list1(Node *&head,Node *&tail,int val)
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
void input_list2(Node *&head,Node *&tail,int val)
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
bool compare(Node *head1,Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    bool flag = true;
    while (tmp1 != NULL)
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
int size1(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int size2(Node *head)
{
    Node *tmp = head;
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
        input_list1(head1,tail1,val);
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
        input_list2(head2,tail2,v);
    }
    int sz1 = size1(head1);
    int sz2 = size2(head2);
    if(sz1 == sz2)
    {
        bool flag = compare(head1,head2);
        (flag == true) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}