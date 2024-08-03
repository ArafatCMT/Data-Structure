#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k = n-1;
    for(int i=1; i<=n; i++)
    {
        int m = i;
        for(int j=1; j<=n; j++)
        {
            if(i == 1)
            {
                cout<<j;
            }
            else if(i == n)
            {
                cout<<m;
                m--;
            }
            else if(i == m)
            {
                cout<<m;
                m++;
            }
            else if(j == n)
            {
                cout<<k;
                k--;
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}