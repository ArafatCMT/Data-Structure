#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,20,30};
    vector<int>v2={40,50,60};
    v = v2;
    v.push_back(70);
    v.pop_back();
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}