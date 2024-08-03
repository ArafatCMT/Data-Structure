#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v={1,2,2,5,7,8,9,4,4,6,4,3,5,7,5,12,3};
    // replace(v.begin(),v.end(),7,500);
    // replace(v.begin(),v.begin()+13,7,1000);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }

    vector<int>v={1,2,2,5,7,8,9,4,4,6,4,3,5,7,5,12,3};
    // vector<int>::iterator it;
    auto it = find(v.begin(),v.end(),4);
    if(it == v.end())
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
    return 0;
}