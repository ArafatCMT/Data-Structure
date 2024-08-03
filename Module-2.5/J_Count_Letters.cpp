#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    vector <int> cnt_v (26,0);
    while (cin>>c)
    {
        cnt_v[c - 'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(cnt_v[i] != 0)
        {
            cout<<char(i+'a')<<" : "<<cnt_v[i]<<endl;
        }
    }
    return 0;
}