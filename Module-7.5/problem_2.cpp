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
void print_recursively(Node *node)
{
    //base case 
    if(node == NULL)
    {
        return;
    }
    print_recursively(node->next);
    cout<<node->val <<" ";

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
        Input_linked_list(head,tail,val);
    }
    print_recursively(head);
    return 0;
}