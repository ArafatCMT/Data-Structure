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
Node* input_tree()
{
    int val;
    cin>>val;
    Node * root;
    if(val == -1) 
    {
        root = NULL;
    }
    else 
    {
        root = new Node (val);
    }
    queue <Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node * p = q.front();
        q.pop();
        
        int l,r;
        cin>>l>>r;
        Node * myLeft , * myRight;
        if(l == -1) 
        {
            myLeft = NULL;
        }
        else 
        {
            myLeft = new Node (l);
        }
        if(r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node (r);
        } 

        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void levelOrder(Node * root)
{
    if(root == NULL) return;
    queue <Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node * p = q.front();
        q.pop();
        cout<<p->val<<" ";
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
bool search(Node * root, int target)
{
    if(root == NULL) return false;
    if(root->val == target) return true;
    if(target < root->val)
    {
        return search(root->left,target);
    }
    else
    {
        return search(root->right,target);
    }
}
int main()
{
    Node * root = input_tree();
    // levelOrder(root);
    bool find = search(root,13);
    (find) ? cout<<"Yes , found " : cout<<"No , Not found "<<endl;
    return 0;
}