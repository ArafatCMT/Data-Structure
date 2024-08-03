#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue <string> q;
    int Q;
    cin>>Q;
    while (Q--)
    {
        int cmnd;
        cin>>cmnd;
        if(cmnd == 0)
        {
            string s;
            cin>>s;
            q.push(s);
        }
        else if(cmnd == 1)
        {
            if(q.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}