#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void Input_linked_list(Node *&head,int data)
{
    Node *newNode = new Node (data);
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}
bool count_element(Node *head,int *cnt)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt[tmp->val]++;
        tmp = tmp->next;
    }
    bool flag = false ;
    for(int i=0; i<101; i++)
    {
        if(cnt[i] != 0)
        {
            if(cnt[i] > 1)
            {
                flag = true;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    Node *head = NULL;
    int val;
    int cnt [101] = {0};
    while (true)
    {
       cin>>val;
       if(val == -1)
       {
        break;
       }
       Input_linked_list(head,val);
    }
    bool flag = count_element(head,cnt);
    (flag == true) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}