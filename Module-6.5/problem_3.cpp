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
int Linked_List_Size(Node *head)
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
void print_middle(Node *head,int sz)
{
    Node *tmp = head;
    int i = 0;
    while (tmp != NULL)
    {
        if(sz%2 == 0)
        {
            if(i == (sz/2)-1)
            {
                cout<<tmp->val<<" ";
            }
            if(i == (sz/2))
            {
                cout<<tmp->val;
                break;
            }
        }
        else 
        {
            if(i == (sz/2))
            {
                cout<<tmp->val;
                break;
            }
        }
        i++;
        tmp = tmp->next;
    }
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
    int sz = Linked_List_Size(head);
    print_middle(head,sz);
    return 0;
}