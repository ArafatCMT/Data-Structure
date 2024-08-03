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
void input_linked_list(Node *&head,int data)
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
bool sortFunction(Node *head)
{
    int size = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        size++;
    }
    
    Node *Head = head;
    bool flag = true ;
    for(int i=0; i<size-1; i++)
    {
        Node *tmp = Head->next;
        for(int j=i+1; j<size; j++)
        {
            if(Head->val > tmp->val)
            {
                flag = false;
                break;
            }
            tmp = tmp->next;
        }
        Head = Head->next;
    }
    return flag;
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
        input_linked_list(head,val);
    }
    bool flag =sortFunction(head);
    (flag == true) ? cout<<"YES": cout<<"NO";
    return 0;
}