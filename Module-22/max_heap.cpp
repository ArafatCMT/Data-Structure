#include<bits/stdc++.h>
using namespace std;
void insert_max_heap(vector <int> &v, int val)
{
    v.push_back(val);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if(v[parent_idx] < v[cur_idx])
        {
            swap(v[parent_idx],v[cur_idx]);
        }
        else
        {
            break;
        }
        cur_idx = parent_idx;
    }
}
void delete_from_max_heap(vector <int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = (cur * 2) + 1;
        int right_idx = (cur * 2) + 2;
        int last_idx = v.size() - 1;
        
        if(left_idx <= last_idx && right_idx <= last_idx)
        {
            //duitai ase
            if(v[left_idx] >= v[right_idx] && v[left_idx] > v[cur])
            {
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
            else if(v[right_idx] >= v[left_idx] && v[right_idx] > v[cur])
            {
                swap(v[right_idx],v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else if(left_idx <= last_idx)
        {
            //left ase
            if(v[left_idx] > v[cur])
            {
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
            else
            {
                break;
            }
        }
        else if(right_idx <= last_idx)
        {
            //right ase
            if(v[right_idx] > v[cur])
            {
                swap(v[right_idx],v[cur]);
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}
void print(vector <int> v)
{
    for(int val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        insert_max_heap(v,val);
    }
    print(v);
    delete_from_max_heap(v);
    print(v);
    delete_from_max_heap(v);
    print(v);
    return 0;
}