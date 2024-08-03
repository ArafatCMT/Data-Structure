#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node * left;
        Node * right;
        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
void preOrder(Node * root)
{
    // base case
    if(root == NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main()
{
    // create node

    Node * root = new Node (10);
    Node * a = new Node (20);
    Node * b = new Node (30);
    Node * c = new Node (40);
    Node * d = new Node (50);
    Node * e = new Node (60);
    Node * f = new Node (70);
    Node * g = new Node (80);
    Node * h = new Node (90);
    Node * i = new Node (100);
    Node * j = new Node (110);
    Node * k = new Node (120);
    Node * l = new Node (130);
    Node * m = new Node (140);
    Node * n = new Node (150);

    //connection

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    c->left = g;
    c->right = h;
    d->left = i;
    d->right = j;
    b->left = e;
    b->right = f;
    e->left = k;
    e->right = l;
    f->left = m;
    f->right = n;

    //print function call
    preOrder(root);
    return 0;
}