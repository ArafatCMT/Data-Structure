#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string val;
        Node * next;
        Node * prev;
        Node(string val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_tail(Node *&head,Node *&tail,string val)
{
    Node * newNode = new Node (val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    string val;
    while (true)
    {
        cin>>val;
        if(val == "end")
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    Node * cur = head;
    int Q;
    cin>>Q;
    string cmnd;
    while (Q--)
    {
       cin>>cmnd;
       if(cmnd == "visit")
       {
        string s;
        cin>>s;
        Node *tmp = head;
        while (tmp != NULL)
        {
            if(tmp->val == s)
            {
                cout<<s<<endl;
                cur = tmp;
                break;
            }
            else if(tmp->next == NULL)
            {
                cout<<"Not Available"<<endl;
            }
            tmp = tmp->next;
        }
       }
       else if(cmnd == "prev")
       {
            if(cur->prev == NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else 
            {
                cur = cur->prev;
                cout<<cur->val<<endl;
            }
       }
       else if(cmnd == "next")
       {
            if(cur->next == NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cur = cur->next;
                cout<<cur->val<<endl;
            }
       }
    }
    return 0;
}