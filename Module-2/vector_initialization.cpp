#include<bits/stdc++.h>
using namespace std;
int main()
{
    //type - 1
    // vector<int>v;

    //type - 2
    // vector<int>v(5); //Construct a vector with N elements and the value will be garbage.

    //type - 3
    // vector<int>v(5,10); //Construct a vector with N elements and the value will be V.

    //type - 4
    // vector<int>v2(5,100);
    // vector<int>v(v2);  //Construct a vector by copying another vector v2.

    //type - 5
    // int arr[5] = {1,2,3,4,5};
    // vector<int>v(arr,arr+5);
    vector<int>v={10,20,30}; //direct initialize vector
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();
    return 0;
}