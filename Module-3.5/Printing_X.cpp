#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mid = (n/2) + 1;
    int last = n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j == i)
            {
                if(i == mid)
                {
                    cout<<"X";
                    last--;
                }
                else
                {
                    cout<<"\\";
                }
            }
            else if(j == last)
            {
                cout<<"/";
                last--;
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