#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,20,30,40,50};
    vector<int>v2={100,200,300};
    
    // v.insert(v.begin()+2,60); //single value insert

    // v.insert(v.begin()+2,v2.begin(),v2.end()); //multiple value insert

    v.insert(v.begin()+2,v2.begin(),v2.begin()+3); //multiple value insert

    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}