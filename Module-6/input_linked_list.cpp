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
void insert_at_tail(Node *&head,int data)
{
    Node *newNode = new Node(data);
    Node *tmp = head;
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        while (tmp->next != NULL)
        {
        tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout<<"Your Linked List : ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
       cin>>val;
       if(val == -1)
       {
        break;
       }
       insert_at_tail(head,val);
    }
    print_linked_list(head);
    return 0;
}