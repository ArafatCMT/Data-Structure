#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    long long int pre[n];
    pre[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        pre[i] = arr[i] + pre[i-1];
    }
    while (q--)
    {
        long long int left,right;
        cin>>left>>right;
        left--;
        right--;
        long long int sum;
        if(left == 0)
        {
            sum = pre[right];
        }
        else
        {
            sum = pre[right] - pre[left-1];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}