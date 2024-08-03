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
void input(Node *&head,Node *&tail,int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
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
void reverse(Node *&head,Node *cur)
{
    //base case
    if(cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
void copy_list(Node *&Head,Node *&Tail,int val)
{
    Node * newNode = new Node(val);
    if(Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        return;
    }
    Tail->next = newNode;
    Tail = newNode;
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
        input(head,tail,val);
    } 
    Node * Head = NULL;
    Node * Tail = NULL;
    Node *tmp = head;
    while (tmp != NULL)
    {
        copy_list(Head,Tail,tmp->val);
        tmp = tmp->next;
    }
    
    reverse(Head,Head);
    // print(Head);

    // print(head);
    tmp = head;
    Node *tmp2 = Head;
    while (tmp != NULL)
    {
        if(tmp->val != tmp2->val)
        {
            cout<<"NO";
            return 0;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    cout<<"YES";
    return 0;
}