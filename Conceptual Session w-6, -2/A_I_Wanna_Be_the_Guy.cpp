#include<bits/stdc++.h>
using namespace std;
int main()
{
    int level;
    cin>>level;

    set <int> s;
    int p,q;
    cin>> p;
    while(p--) 
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    cin>>q;
    while(q--)
    {
        int val;
        cin>>val;
        s.insert(val);
    }
    if(s.size() == level) 
    cout<<"I become the guy."<<endl;
    else 
    cout<<"Oh, my keyboard!"<<endl;
    return 0;
}