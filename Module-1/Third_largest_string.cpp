#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //sort string descending order
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i].size() < arr[j].size())
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    //first largest string
    string first = arr[0];
    string second,third;
    //fing second largest string 
    for(int i=1; i<n; i++)
    {
        if(arr[i].size() < first.size())
        {
            second = arr[i];
            break;
        }
    }
    //fing third largest string 
    for(int i=0; i<n; i++)
    {
        if(arr[i].size() < second.size())
        {
            third = arr[i];
            break;
        }
    }
    cout<<third;
    return 0;
}