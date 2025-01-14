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
void count_node(Node * root)
{
    int count = 0;
    int lev = 0;
    bool frq[100010] = {false};
    queue <pair<Node*,int> >q;
    q.push({root,1});
    while (!q.empty())
    {
        pair<Node*,int> p = q.front();
        Node* node = p.first;
        int level = p.second;
        q.pop();

        count++;
        if(frq[level] == false)
        {
            lev++;
            frq[level] = true;
        }

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    int total = pow(2,lev) - 1;
    (total == count) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main()
{
    Node * root = input_tree();
    count_node(root);
    return 0;
}