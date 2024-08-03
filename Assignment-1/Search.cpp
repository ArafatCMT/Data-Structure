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
int search(Node *head,int x)
{
    int flag = -1;
    Node *tmp = head;
    int i = 0;
    while (tmp != NULL)
    {
        if(tmp->val == x)
        {
            flag = i;
            break;
        }
        tmp = tmp->next;
        i++;
    }
    return flag;
}
int main()
{
    int test;
    cin>>test;
    while (test--)
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
            Input_linked_list(head,tail,val);
        }
        int x;
        cin>>x;
        int flag = search(head,x);
        cout<<flag<<endl;
    }
    
    
    return 0;
}