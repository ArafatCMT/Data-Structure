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
bool insert_any_position(Node *head,int pos,int val)
{
    Node *newNode = new Node (val);
    Node *tmp = head;
    bool flag = true;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout<<"Invalid"<<endl;
            flag = false;
            return flag;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    return flag;
}
void Insert_at_head(Node *&head,int val)
{
    Node *newNode = new Node (val);
    newNode->next = head;
    head = newNode;
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
    int q;
    cin>>q;
    while (q--)
    {
        int pos,data;
        cin>>pos>>data;
        if(pos==0)
        {
            Insert_at_head(head,data);
            print_linked_list(head);

        }
        else
        {
            bool flag = insert_any_position(head,pos,data);
            if(flag == true)
            {
                print_linked_list(head);
            }
        }
    }
    return 0;
}