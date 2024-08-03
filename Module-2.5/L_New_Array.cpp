#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v1 (n);
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    vector<int> v2 (n);
    for(int i=0; i<n; i++)
    {
        cin>>v2[i];
    }
    vector<int> v3(2*n);
    for(int i=0; i<n; i++)
    {
        v3[i] = v2[i];
    }
    int j=n;
    for(int i=0; i<n; i++)
    {
        v3[j] = v1[i];
        j++;
    }
    for(int val:v3)
    {
        cout<<val<<" ";
    }
    return 0;
}