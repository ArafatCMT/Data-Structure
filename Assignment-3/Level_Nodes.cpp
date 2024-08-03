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
        root = NULL;
    else
        root = new Node (val);
    queue <Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();
        
        int l,r;
        cin>>l>>r;
        Node * myLeft;
        Node * myRight;
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
void levelNodes(Node * root,int x)
{
    queue <pair<Node*,int> >q;
    q.push({root,1});
    while (!q.empty())
    {
        pair<Node*,int> p = q.front();
        Node* node = p.first;
        int level = p.second;
        q.pop();

        if(x == level-1)
        {
            cout<<node->val<<" ";
        }

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
}
int level_count(Node * root)
{
    int l = 0;
    bool frq[100010] = {false};
    queue <pair<Node*,int> >q;
    q.push({root,1});
    while (!q.empty())
    {
        pair<Node*,int> p = q.front();
        Node* node = p.first;
        int level = p.second;
        q.pop();

        if(frq[level] == false)
        {
            l++;
            frq[level] = true;
        }

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    return l;
}
int main()
{
    Node * root = input_tree();
    int x;
    cin>>x;
    int level = level_count(root);
    if(x >= level)
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
        levelNodes(root,x);
    }
    return 0;
}