#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    queue <int> q;
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int v;
        cin>>v;
        q.push(v);
    }
    if(st.size() == q.size())
    {
        bool flag = true;
        while (!q.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
        (flag == true) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}