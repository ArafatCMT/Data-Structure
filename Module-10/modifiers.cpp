#include<bits/stdc++.h>
using namespace std;
int main()
{

    list<int>myList = {30,20,30,40,50,30,70};
    vector<int> v = {25,50,75};
    list<int>newList = {22,33,44,55};
    //assign list from another list
    // list<int>newList = myList;








    
    // list<int>newList;
    // newList.assign(myList.begin(),myList.end());
    // myList.push_back(80);
    // myList.push_back(90);
    // myList.push_front(100);
    // myList.push_front(200);
    // myList.pop_back();
    // myList.pop_front();
    // myList.pop_front();
    // myList.insert(next(myList.begin(),3),newList.begin(),newList.end());
    
    // myList.erase(next(myList.begin(),2),next(myList.begin(),6));
    // replace(myList.begin(),myList.end(),30,10);
    
    auto it=find(myList.begin(),myList.end(),20); 
    cout<<*it<<endl;

    // for(int val:myList)
    // {
    //     cout<<val<<endl;
    // }
    return 0;
}