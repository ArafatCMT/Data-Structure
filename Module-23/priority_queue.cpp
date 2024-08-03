#include<bits/stdc++.h>
using namespace std;
int main()
{
    //priority_queue <int> pq; // Max heap er priority queue er syntax
    priority_queue <int, vector<int>, greater<int>> pq; // min heap er priority queue ba syntax
    while (true)
    {
        int cmd;
        cin>>cmd;
        if(cmd == 0)
        {
            // insert
            int val;
            cin>>val;
            pq.push(val); // O(log n)
        }
        else if(cmd == 1)
        {
            // delete
            pq.pop(); // O(log n)
        }
        else if(cmd == 2)
        {
            cout<<pq.top()<<endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}