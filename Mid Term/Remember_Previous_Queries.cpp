#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList;
    int sz = 0;
    int Q;
    cin>>Q;
    while (Q--)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            myList.push_front(v);
            sz++;
        }
        else if(x==1)
        {
            myList.push_back(v);
            sz++;
        }
        else if(x==2)
        {
            if(v < sz)
            {
                myList.erase(next(myList.begin(),v));
                sz--;
            }
        }
        list<int>copyList(myList);
        copyList.reverse();
        cout<<"L -> ";
        for(int val:myList)
        {
            cout<<val<<" ";
        }
        cout<<endl;
        cout<<"R -> ";
        for(int val:copyList)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}