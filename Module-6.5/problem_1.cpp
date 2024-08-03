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
void Input_linked_list(Node *&head,int data)
{
    Node *newNode = new Node (data);
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
int print_linked_list(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node * head = NULL;
    int data;
    while (true)
    {
        cin>>data;
        if(data == -1)
        {
            break;
        }
        Input_linked_list(head,data);
    }
    int size = print_linked_list(head);
    cout<<size<<endl;
    return 0;
}