#include<bits/stdc++.h>
using namespace std;
bool pile_Of_word(string s1,string s2)
{
    int cntS1[26] = {0};
    int cntS2[26] = {0};
    bool flag = true;
    for(int i=0; i<s1.size(); i++)
    {
        cntS1[s1[i]-'a']++;
    }
    for(int i=0; i<s2.size(); i++)
    {
        cntS2[s2[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(cntS1[i] != cntS2[i])
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        bool flag = pile_Of_word(s1,s2);
        (flag)? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}