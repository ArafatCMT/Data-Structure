#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int data;
        Node *link;
        Node(int data)
        {
            this->data = data;
            this->link = NULL;
        }
};
int main()
{
    Node *head = new Node (5);
    Node *a = new Node (15);
    Node *b = new Node (25);
    Node *c = new Node (35);
    Node *tail = new Node (45);

    head->link = a;
    a->link = b;
    b->link = c;
    c->link = tail;

    Node *temp = head ;

    while (temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->link;
    }
    
    temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->link;
    }
    return 0;
}