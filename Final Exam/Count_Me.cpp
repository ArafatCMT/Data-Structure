#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        map < string, int > mp;
        int mx_cnt = 0;
        string answer;
        while (ss >> word)
        {
            mp[word]++;
            if(mx_cnt < mp[word])
            {
                mx_cnt = mp[word];
                answer = word;
            }
        }
        cout<<answer<<" "<<mx_cnt<<endl;
    }
    
    
    return 0;
}