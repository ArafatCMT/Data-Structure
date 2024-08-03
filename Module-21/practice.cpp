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
Node * input_tree()
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
        root = new Node(val);
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
    queue <Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node * p = q.front();
        q.pop();
        cout<<p->val<<" ";
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
bool search(Node * root, int val)
{
    if(root == NULL) return false;
    if(val == root->val) return true;
    if(val < root->val)
    {
        return search(root->left,val);
    }
    else
    {
        return search(root->right,val);
    }
}
void insert(Node * &root, int val)
{
    if(root == NULL)
    {
        root = new Node (val);
        return;
    }
    if(root->val < val)
    {
        if(root->right == NULL)
        {
            root->right = new Node (val);
        }
        else
        {
            insert(root->right,val);
        }
    }
    else
    {
        if(root->left == NULL)
        {
            root->left = new Node (val);
        }
        else
        {
            insert(root->left,val);
        }
    }
}
int main()
{
    Node * root = input_tree();
    // levelOrder(root);
    // bool find = search(root,11);
    // (find) ? cout<<"Found"<<endl : cout<<"Not Found"<<endl;
    insert(root,33);
    insert(root,40);
    insert(root,2);
    levelOrder(root);
    return 0;
}