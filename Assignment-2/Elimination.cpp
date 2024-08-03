#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin>>Q;
    while(Q--)
    {
        string s;
        cin>>s;
        stack <int> st;
        int sTop ;
        for(char c:s)
        {
            if(st.empty())
            {
                sTop = c;
            }
            st.push(c);
            if(sTop=='0' && st.top()=='1')
            {
                st.pop();
                st.pop();
                if(!st.empty())
                {
                    sTop = st.top();
                }
            }
            else
            {
                sTop = st.top();
            }
        }
        (st.empty()) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}