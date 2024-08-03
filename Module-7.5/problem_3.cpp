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
int Size(Node *head)
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
void middle_element(Node *head,int n)
{
    Node *tmp = head;
    int i = 0;
    while (tmp != NULL)
    {
        if(n%2==0)
        {
            if(i == (n/2)-1)
            {
                cout<<tmp->val<<" ";
            }
            if(i==(n/2))
            {
                cout<<tmp->val;
                break;
            }
        }
        else
        {
            if(i==(n/2))
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
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        Input_linked_list(head,tail,val);
    }
    int n = Size(head);
    middle_element(head,n);
    return 0;
}