#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        set <int> s;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            s.insert(val);
        }
        for(auto it = s.begin(); it != s.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}