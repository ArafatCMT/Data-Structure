#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue <Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* pr = q.front();
        q.pop();

        int l,r;
        cin>> l >> r;
        Node* myLeft;
        Node* myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        pr->left = myLeft;
        pr->right = myRight;

        if(pr->left) q.push (pr->left);
        if(pr->right) q.push (pr->right);

    }
    return root;
}
void levelOrder(Node* root)
{
    if(root == NULL) 
    {
        cout<<"NO TREE !!" ;
        return;
    }
    queue <Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* pr = q.front();
        q.pop();
        cout<<pr->val<<" ";
        if(pr->left) q.push (pr->left);
        if(pr->right) q.push (pr->right);
    }
}
void preOrder(Node* root)
{
    if(root == NULL) return;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
    return;
}
int main()
{
    Node* root = input_tree();
    // levelOrder(root);
    preOrder(root);
    return 0;
}