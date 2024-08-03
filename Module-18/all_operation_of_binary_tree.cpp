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
    queue<Node *> q;
    if(val == -1) root = NULL;
    else root = new Node (val);
    if(root) q.push(root);
    while (!q.empty())
    {
        //1.line thake ber kore ano
        Node * p = q.front();
        q.pop();
        //2.jabotiyo kaj kora
        int l,r;
        cin>>l>>r;
        Node * myLeft , * myRight;
        if(l == -1) 
            myLeft = NULL;
        else
            myLeft = new Node (l);
        if(r == -1)
            myRight = NULL;
        else    
            myRight = new Node (r);
        p->left = myLeft;
        p->right = myRight;
        //3.tar children gulo k queue te push kora
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
//Depth Order start
void preOrder(Node * root)
{
    //base case
    if(root == NULL) return;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node * root)
{
    //base case
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}
void inOrder(Node * root)
{
    //base case
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}
//Depth Order end
void levelOrder(Node * root)
{
    if(root == NULL)
    {
        cout<<"No Tree !!";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        //line thake ber kore ano
        Node * p = q.front();
        q.pop();
        //jabotiyo kaj korbo
        cout<<p->val<<" ";
        //p er children gulo k queue te push korbo
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
int cnt_node(Node * root)
{
    //base case
    if(root == NULL) return 0;
    int l = cnt_node(root->left);
    int r = cnt_node(root->right);
    return l+r+1;
}
int cnt_leaf(Node * root)
{
    if(root == NULL) return 0;
    if(root->left == NULL and root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = cnt_leaf(root->left);
        int r = cnt_leaf(root->right);
        return l+r;
    }
}
int mxHeight(Node * root)
{
    if(root == NULL) return 0;
    int l = mxHeight(root->left);
    int r = mxHeight(root->right);
    return max(l,r)+1;
}
int main()
{
    Node * root = input_tree();
    cout<<"Pre Order : ";
    preOrder(root);
    cout<<endl<<endl;
    cout<<"Post Order : ";
    postOrder(root);
    cout<<endl<<endl;
    cout<<"In Order : ";
    inOrder(root);
    cout<<endl<<endl;
    cout<<"Level Order : ";
    levelOrder(root);
    cout<<endl<<endl;
    cout<<"Total Node : ";
    cout<<cnt_node(root)<<endl<<endl;
    cout<<"Leaf Node : ";
    cout<<cnt_leaf(root)<<endl<<endl;
    cout<<"Max Height : ";
    cout<<mxHeight(root);
    return 0;
}