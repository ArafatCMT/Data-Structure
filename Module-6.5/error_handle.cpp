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
void Input_linked_list(Node *&head,int val)
{
    Node *newNode = new Node (val);
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *tmp = head;
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
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void delete_any_position(Node *head,int pos)
{
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout<<"Invalid index"<<endl;
            return;
        }
    }
    if(tmp->next == NULL)
        {
            cout<<"Invalid index"<<endl;
            return;
        }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    if(head == NULL)
    {
        cout<<"Invalid index"<<endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
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
        Input_linked_list(head,val);
    }
    int pos;
    cin>>pos;
    if(pos==0)
    {
        delete_head(head);
        print_linked_list(head);
    }
    else
    {
        delete_any_position (head,pos);
        print_linked_list(head);
    }
    return 0;
}