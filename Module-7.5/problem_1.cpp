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
int Linked_list_size(Node *head)
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
int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;

    Node *head_2 = NULL;
    Node *tail_2 = NULL;

    int value;
    while (true)
    {
        cin>>value;
        if(value == -1)
        {
            break;
        }
        Input_linked_list(head_1,tail_1,value);
    }
    int data;
    while (true)
    {
        cin>>data;
        if(data == -1)
        {
            break;
        }
        Input_linked_list(head_2,tail_2,data);
    }

    int size_1 = Linked_list_size(head_1);
    int size_2 = Linked_list_size(head_2);

    (size_1 == size_2) ? cout<<"YES" <<endl : cout<<"NO" <<endl ;
    return 0;
}