#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double H,A,B;
        cin>>H>>A>>B;
        double min,x;
        min = H - A;
        x = A - B;
        if(min <= 0)
        {
            cout<<"1"<<endl;
        }
        else if(x <= 0)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            min = min / x;
            min = min * 2.0;
            cout<<fixed<<setprecision(0)<<min+1<<endl;
        }
    }
    return 0;
}