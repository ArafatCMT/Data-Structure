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
class Stack
{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz = 0;
        void push(int val)
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
        void pop()
        {
            sz--;
            Node * delNode = tail;
            tail = tail->prev;
            delete delNode;
            if(tail == NULL)
            {
                head = NULL;
            }
            else
            {
                tail->next = NULL;
            }
        }
        int top()
        {
            return tail->val;
        }
        int size()
        {
            return sz;
        }
};
class Queue
{
    public:
        Node * Head = NULL;
        Node * Tail = NULL;
        int Sz = 0;
        void push(int val)
        {
            Sz++;
            Node * newNode = new Node(val);
            if(Head == NULL)
            {
                Head = newNode;
                Tail = newNode;

                return;
            }
            Tail->next = newNode;
            newNode->prev = Tail;
            Tail = newNode;
        }
        void pop ()
        {
            Sz--;
            Node * deleteNode = Head;
            Head = Head->next;
            delete deleteNode;
            if(Head == NULL)
            {
                Tail = NULL;
                return;
            }
            Head->prev = NULL;
        }
        int front()
        {
            return Head->val;
        }
        int size()
        {
            return Sz;
        }
};
int main()
{
    Stack st;
    Queue q;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int v;
        cin>>v;
        st.push(v);
    }
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if(st.size() == q.size())
    {
        while (st.size() != 0)
        {
            if(st.top() != q.front())
            {
                cout<<"NO"<<endl;
                return 0;
            }
            st.pop();
            q.pop();
        }
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}