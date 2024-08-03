#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList;
    // list<int>list2 = {10,20,30,40,50};
    int arr[5] = {20,40,60,80,100};

    // list<int>myList(arr,arr+5);
    // cout<<myList.size();
    vector<int>v = {100,200,300,400};
    list<int>myList(v.begin(),v.end());


    // for(auto it=myList.begin(); it != myList.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }

    for(int val:myList)
    {
        cout<<val<<" ";
    }
    return 0;
}