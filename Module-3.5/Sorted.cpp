#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        bool flag = true;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(v[i] > v[j])
                {
                    flag = false;
                    break;
                }
            }
        }
        (flag == true) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    
    return 0;
}