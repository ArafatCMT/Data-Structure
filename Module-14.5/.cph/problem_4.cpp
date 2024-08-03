#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int v;
        cin>>v;
        q.push(v);
    }
    stack <int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
       cout<<st.top()<<" ";
       st.pop();
    }
    
    return 0;
}