#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    queue <int> q;
    for(int i=0; i<m; i++)
    {
        int v;
        cin>>v;
        q.push(v);
    }
    if(st.size() == q.size())
    {
        while (!st.empty())
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