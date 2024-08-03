#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2 != 0)
    {
        vector<int> v;
        while (n > 0)
        {
            int rem = n % 2;
            n /= 2;
            v.push_back(rem);
        }
        reverse(v.begin(),v.end());
        int i=0, j = v.size()-1;
        bool found = true;
        while (i<j)
        {
            if(v[i] != v[j])
            {
                found = false;
                break;
            }
            i++;
            j--;
        }
        found ? cout<<"YES" : cout<<"NO" ;  
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}