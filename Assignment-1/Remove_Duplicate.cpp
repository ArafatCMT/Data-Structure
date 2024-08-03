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
void Input_linked_list (Node *&head,Node *&tail,int val)
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
void delete_duplicate(Node *head,int val)
{
    Node *tmp2 = head;
    while (tmp2->next != NULL)
    {
        if(tmp2->next->val==val)
        {
            Node *deleteNode = tmp2->next;
            tmp2->next = tmp2->next->next;
            delete deleteNode;
        }
        else 
        {
            tmp2 = tmp2->next;
        }
    }   
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        Input_linked_list (head,tail,val);
    }
    
    Node *tmp = head;
    while (tmp != NULL)
    {
        delete_duplicate(tmp,tmp->val);
        tmp = tmp->next;
    }
    print_linked_list(head);
    return 0;
}