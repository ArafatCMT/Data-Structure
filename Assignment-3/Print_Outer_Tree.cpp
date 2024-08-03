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

vector <int> v1;
vector <int> v2;

void outer_left_sub_tree(Node * root)
{
    if(root == NULL) return;
    if(root->left == NULL)
    {
        outer_left_sub_tree(root->right);
    }
    outer_left_sub_tree(root->left);
    v1.push_back(root->val);
}
void outer_right_sub_tree(Node * root)
{
    if(root == NULL) return;
    if(root->right == NULL)
    {
        outer_right_sub_tree(root->left);
    }
    outer_right_sub_tree(root->right);
    v2.push_back(root->val);
}
int main()
{
    Node * root = input_tree();

    if(root->left == NULL)
    {
        outer_left_sub_tree(root);
        reverse(v1.begin(),v1.end());
    }
    else if(root->right == NULL)
    {
        outer_left_sub_tree(root);
    }
    else
    {
        outer_left_sub_tree(root);
        outer_right_sub_tree(root);

        v2.pop_back();

        reverse(v2.begin(),v2.end());

        v1.insert(v1.end(),v2.begin(),v2.end());
    }
    for(int val:v1)
    {
        cout<<val<<" ";
    }
    return 0;
}