#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    // cout<<v.max_size()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // cout<<v.size()<<endl;
    //  v.clear();
    // cout<<v.size()<<endl;
    // cout<<v[3]<<endl;
    // cout<<v.size()<<endl;
    v.resize(2);
    v.resize(7,100);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}