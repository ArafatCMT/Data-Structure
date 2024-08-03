#include<bits/stdc++.h>
using namespace std;
int main()
{
    //type - 1
    // int n;
    // cin>>n;
    // vector<int> v(n);
    // for(int i=0; i<n; i++)
    // {
    //     cin>>v[i];
    // }
    // cout<<v.size()<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    //type - 2
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}