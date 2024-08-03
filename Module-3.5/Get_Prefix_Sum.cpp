#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <long long int> v (n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<long long int> pre (n);
    pre[0] = v[0];
    for(int i=1; i<n; i++)
    {
        pre[i] = v[i] + pre[i-1];
    }
    int i = 0 , j = pre.size() - 1;
    while (i<j)
    {
        long long int temp = pre[i];
        pre[i] = pre[j];
        pre[j] = temp;
        i++;
        j--;
    }
    for(int i=0; i<n; i++)
    {
        cout<<pre[i]<<" ";
    }
    return 0;
}