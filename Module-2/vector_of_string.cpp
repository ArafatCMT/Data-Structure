#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(string val:v)
    {
        cout<<val<<endl;
    }
    return 0;
}