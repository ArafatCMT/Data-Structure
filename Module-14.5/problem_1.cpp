#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        list <int> l;
        void push(int val)
        {
            l.push_back(val);
        }
        void pop()
        {
            l.pop_back();
        }
        int top()
        {
            return l.back();
        }
        int size()
        {
            return l.size();
        }
        bool empty()
        {
            return l.empty();
        }
};
int main()
{
    myStack st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    myStack stk;
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int v;
        cin>>v;
        stk.push(v);
    }
    if(st.size() == stk.size())
    {
        while (!st.empty())
        {
            if(st.top() != stk.top())
            {
                cout<<"NO"<<endl;
                return 0;
            }
            st.pop();
            stk.pop();
        }
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}