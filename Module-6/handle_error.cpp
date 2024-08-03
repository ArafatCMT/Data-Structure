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

void insert_at_tail(Node *&head,int data)
{
    Node *newNode = new Node(data);
    Node *tmp = head;
    if(head == NULL)
    {
        head = newNode;
        cout<<endl<<"Insert at Head"<<endl<<endl;
    }
    else
    {
        while (tmp->next != NULL)
        {
        tmp = tmp->next;
        }
        tmp->next = newNode;
        cout<<endl<<"Insert at Tail"<<endl<<endl;
    }
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout<<"Your Linked List : ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void insert_any_position(Node *&head,int pos,int data)
{
    Node *newNode = new Node(data);
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout<<endl<<"Invalid index"<<endl<<endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<endl<<"Inserted at Position "<<pos<<endl<<endl;
}

void insert_at_head(Node *&head,int data)
{
    Node *newNode = new Node (data);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Insert at Head"<<endl<<endl;
}

void delete_from_position(Node *head,int pos)
{
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout<<endl<<"Invalid index"<<endl<<endl;
            return;
        }
    }
    if(tmp->next == NULL)
    {
        cout<<endl<<"Invalid index"<<endl<<endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted Position "<<pos<<endl<<endl;
}

void delete_head(Node * &head)
{
    if(head == NULL)
    {
        cout<<endl<<"Invalid index"<<endl<<endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<endl<<"Delete Head"<<endl<<endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout<<"Option 1: Insert at Tail"<<endl; //done
        cout<<"Option 2: Print Linked List"<<endl;//done
        cout<<"Option 3: Insert any Position"<<endl;//done :- problem
        cout<<"Option 4: Insert at Head"<<endl; //done 
        cout<<"Option 5: Delete from Position"<<endl; //done :-problem
        cout<<"Option 6: Delete Head"<<endl; //done :- problem
        cout<<"Option 7: Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please enter value : ";
            int data;
            cin>>data;
            insert_at_tail(head,data);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            int pos;
            cout<<"Enter Position : ";
            cin>>pos;
            int val;
            cout<<"Enter value : ";
            cin>>val;
            if(pos==0)
            {
                insert_at_head(head,val);
            }
            else
            {
                insert_any_position(head,pos,val);
            }
        }
        else if(op==4)
        {
            int data;
            cout<<"Enter value : ";
            cin>>data;
            insert_at_head(head,data);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter Position : ";
            cin>>pos;
            if(pos==0)
            {
                delete_head(head);
            }
            else 
            {
                delete_from_position(head,pos);
            }
        }
        else if(op==6)
        {
            delete_head(head);
        }
        else if(op==7)
        {
            break;
        }
    }
    
    return 0;
}