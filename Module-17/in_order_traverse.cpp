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
void inOrder(Node * root)
{
    //base case
    if(root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}
int main()
{
    // create node

    Node * root = new Node (10);
    Node * a = new Node (20);
    Node * b = new Node (30);
    Node * c = new Node (40);
    Node * d = new Node (50);
    Node * e = new Node (80);
    Node * f = new Node (90);
    Node * g = new Node (60);
    Node * h = new Node (70);
    Node * i = new Node (100);
    Node * j = new Node (110);

    //connection

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    c->right = g;
    d->left = h;
    b->left = e;
    b->right = f;
    f->left = i;
    f->right = j;

    //print function call
    inOrder(root);
    return 0;
}