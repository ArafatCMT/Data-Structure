#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Q;
    cin>>n>>Q;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    while (Q--)
    {
        int left,right;
        cin>>left>>right;
        int sum = 0;
        for(int i=left-1; i<right; i++)
        {
            sum += arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}