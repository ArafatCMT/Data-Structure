#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    stack <char> stk;
    queue <char> q;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack <char> st;
        for(char c:s)
        {
            if(st.empty())
            {
                st.push(c);
                continue;
            }
            if((st.top()=='R' && c=='B') || (st.top()=='B' && c=='R'))
            {
                if(!stk.empty())
                {
                    if(stk.top() != 'P')
                    {
                        stk.push('P');
                    }
                    else 
                    {
                        stk.pop();
                    }
                }
                else
                {
                    stk.push('P');
                }
                st.pop();
            }
            else if((st.top()=='R' && c=='G') || (st.top()=='G' && c=='R'))
            {
                if(!stk.empty())
                {
                    if(stk.top() != 'Y')
                    {
                        stk.push('Y');
                    }
                    else 
                    {
                        stk.pop();
                    }
                }
                else
                {
                    stk.push('Y');
                }
                st.pop();
            }
            else if((st.top()=='G' && c=='B') || (st.top()=='B' && c=='G'))
            {
                if(!stk.empty())
                {
                    if(stk.top() != 'C')
                    {
                        stk.push('C');
                    }
                    else 
                    {
                        stk.pop();
                    }
                }
                else
                {
                    stk.push('C');
                }
                st.pop();
            }
            else if((st.top()=='G' && c=='G') || (st.top()=='B' && c=='B') || (st.top()=='R' && c=='R'))
            {
                st.pop();
            }
        }
        if(!st.empty())
        {
            stk.push(st.top());
            st.pop();

        }
        while (!stk.empty())
        {
            q.push(stk.top());
            stk.pop();
        }
        while (!q.empty())
        {
           stk.push(q.front());
           q.pop();
        }
        while (!stk.empty())
        {
            cout<<stk.top();
            stk.pop();
        }
        cout<<endl;
    }
    
    return 0;
}