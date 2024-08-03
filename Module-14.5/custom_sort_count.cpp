#include<bits/stdc++.h>
using namespace std;
class freq
{
    public:
        char c;
        int count;
};
bool cmp(freq a,freq b)
{
    if(a.count == b.count)
    {
        return a.c < b.c;
    }
    else
    {
        return a.count > b.count;
    }
}
int main()
{
    string s;
    cin>>s;
    freq arr[26];
    for(int i=0; i<26; i++)
    {
        arr[i].c = char('a'+i);
        arr[i].count = 0;
    }
    for(char v:s)
    {
        arr[v-'a'].count++;
    }
    sort(arr,arr+26,cmp);
    for(int i=0; i<26; i++)
    {

        if(arr[i].count > 0)
        {
            for(int j=0; j<arr[i].count; j++)
            {
                cout<<arr[i].c;
            }
        }
    }
    return 0;
}