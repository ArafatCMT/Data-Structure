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
void levelOrder(Node * root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        //1.ber kore ana
        Node * f = q.front();
        q.pop();

        //2.jabotiyo joto kaj gulo kora
        cout<<f->val<<" ";

        //3.tar children gulo ke push kora
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

}
void level_order(Node * root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        //1.ber kore ana
        Node * f = q.front();
        q.pop();

        //2.jabotiyo joto kaj gulo kora
        cout<<f->val<<" ";

        //3.tar children gulo ke push kora
        if(f->right) q.push(f->right);
        if(f->left) q.push(f->left);
    }

}
int main()
{
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

    //connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    d->left = g;
    b->left = e;
    b->right = f;
    f->left = h;
    f->right = i;

    //left to right order
    levelOrder(root);
    cout<<endl;
    level_order(root);
    return 0;
}