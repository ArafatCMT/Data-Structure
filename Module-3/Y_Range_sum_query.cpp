#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,Q;
    cin>>n>>Q;
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //prefix sum
    long long int pre[n];
    pre[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        pre[i] = arr[i] + pre[i-1];
    }
    while (Q--)
    {
        int left,right;
        cin>>left>>right;
        left--;
        right--;
        long long int sum = 0;
        if(left==0)
        {
            sum += pre[right] - 0;
        }
        else
        {
            sum += pre[right] - pre[left-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}