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
vector<int> v;
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
void postOrder(Node * root)
{
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    if(root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }
}
int main()
{
    Node * root = input_tree();
    postOrder(root);
    sort(v.begin(),v.end(),greater<int>());
    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}