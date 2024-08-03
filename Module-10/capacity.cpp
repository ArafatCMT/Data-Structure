#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList = {10,20,30,40};
    // myList.clear();
    // myList.resize(2);
    // myList.resize(5,20);
    // myList.clear();
    (myList.empty()==true)? cout<<"empty":cout<<"not empty";
    cout<<endl;
    cout<<myList.size()<<endl;

    for(int val:myList)
    {
        cout<<val<<" ";
    }
    return 0;
}