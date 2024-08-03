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
    Node * newNode = new Node (val);
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
bool check_palindrome(Node *head,Node *tail)
{
    Node * i = head;
    Node *j = tail;
    bool flag = true;
    while (i!=j && i->next!=j)
    {
        if(i->val != j->val)
        {
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->val != j->val)
    {
        flag = false;
    }
    return flag;
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
       input_list(head,tail,val);
    }
    bool flag = check_palindrome(head,tail);
    (flag==true) ? cout<<"YES" : cout<<"NO";
    return 0;
}