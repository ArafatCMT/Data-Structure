#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    stack <int> cpySt;
    while (!st.empty())
    {
        cpySt.push(st.top());
        st.pop();
    }
    while (!cpySt.empty())
    {
        cout<<cpySt.top()<<" ";
        cpySt.pop();
    }
    
    return 0;
}