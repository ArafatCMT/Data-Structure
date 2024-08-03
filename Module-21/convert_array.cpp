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
Node * convert(int * arr, int l, int r)
{
    //base case
    if(l > r) return NULL;
    int mid = (l+r)/2;
    Node * root = new Node (arr[mid]);
    Node * rootLeft = convert(arr,l,mid-1);
    Node * rootRight = convert(arr,mid+1,r);
    root->left = rootLeft;
    root->right = rootRight;
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
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    Node * root = convert(arr,0,n-1);
    levelOrder(root);
    return 0;
}