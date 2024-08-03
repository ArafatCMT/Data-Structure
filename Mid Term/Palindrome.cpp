#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * next;
        Node * prev;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void input_list(Node *&head,Node *&tail,int val)
{
    Node * newNode = new Node (val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        input_list(head,tail,val);
    }
    Node * i = head;
    Node * j = tail;
    bool flag = true;
    while (i!=j && j->next!=i)
    {
        if(i->val != j->val)
        {
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    (flag==true)? cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}