#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList = {10,20,10,40,30,50,20,10,10,30};
    // myList.remove(40);
    myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();
    for(int val:myList)
    {
        cout<<val<<endl;
    }
    return 0;
}