#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * next;
        Node * prev;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
class myStack
{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz = 0;
        void push (int val)
        {
           sz++;
           Node * newNode = new Node (val);
           if(head == NULL)
           {
            head = newNode;
            tail = newNode;
            return;
           }
           tail->next = newNode;
           newNode->prev = tail;
           tail = newNode;
        }
        void pop ()
        {
            sz--;
            Node * deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;
            if(tail == NULL)
            {
                head = NULL;
                return;
            }
            tail->next = NULL;

        }
        int top()
        {
            return tail->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz==0)
                return true;
            else
                return false;
        }
};
int main()
{
    myStack st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    while (st.size()!= 0)
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}