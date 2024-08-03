#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v ={1,2,3,4,5,6,2,6,3,2,8,3};
    vector<int> v2 ={10,20,30,40,50,60,70,80,90};
    
    for(int i=0; i<8; i++)
    {
        if(v[i] == 2)
        {
            v[i]= 550;
        }
    }

    for(int i:v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}