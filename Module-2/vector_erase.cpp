#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,20,30,40,50};
    // v.erase(v.begin()+2); // single element delete
    // v.erase(v.begin()+1,v.begin()+4); // multiple element delete
    v.erase(v.begin()+1,v.end()-1);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}