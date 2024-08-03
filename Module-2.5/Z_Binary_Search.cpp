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
    sort(arr,arr+n);
    while (Q--)
    {    
        int num;
        cin>>num;
        int start = 0, end = n-1;
        int flag = 0;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (arr[mid] == num)
            {
                flag = 1;
                break;
            }
            else if (arr[mid] < num)
            {
                start = mid + 1;
            }
            else 
            {
                end = mid - 1;
            }
        }
        (flag == 1)? cout<<"found"<<endl:cout<<"not found"<<endl;
    }
    return 0;
}