#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string, int> mp;
    mp.insert({"arafat",55}); // O(log N)
    mp.insert({"nahid",81});
    mp.insert({"taufiq",20});
    mp.insert({"sumaiya",36});
    mp["shawon"] = 21;
    mp["bayezid"] = 40;
    mp["omar"] = 61;
    mp[{1,2}] = 2;

    // for(auto it=mp.begin(); it != mp.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<" "<<endl;
    // }
    // cout<<mp["arafat"];
    // (mp.count("sumaiya")) ? cout<<"Ase" : cout<<"Nai";
    // if(mp["arafat"] > mp["sumaiya"])
    // {
    //     cout<<mp["arafat"];
    // }
    // else 
    // {
    //     cout<<mp["sumaiya"];
    // }

    // if(mp.find("shawon") != mp.end()) cout<<"ase"<<endl ;
    // else cout<<"nai"<<endl;
    // cout<<mp.count("Arafat");

    cout<<mp.count({1,2})<<endl;
    cout<<mp[{1,2}];
    return 0;
}