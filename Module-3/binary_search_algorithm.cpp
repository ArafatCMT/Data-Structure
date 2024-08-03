#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    while (q--)
    {
        int val;
        cin>>val;
        int start = 0, end = n-1;
        bool flag = false;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if(arr[mid] == val)
            {
                flag = true;
                break;
            }
            else if(val > arr[mid])
            {
                end = mid - 1;
            }
            else 
            {
                start = mid + 1;
            }
        }
        (flag == true) ? cout<<"found"<<endl : cout<<"not found"<<endl;
    }
    return 0;
}