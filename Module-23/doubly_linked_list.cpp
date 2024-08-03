#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* prev;
        Node* next;
        Node(int val)
        {
            this->val = val;
            this->prev = NULL;
            this->next = NULL;
        }
};
int sz = 0;
    // int get(int index) {
    //     if(index >= sz)
    //     {
    //         return -1;
    //     }
    //     Node* tmp = head;
    //     for(int i=1; i<=index; i++)
    //     {
    //         tmp = tmp->next;
    //     }
    //     return tmp->val;
    // }
    
    void addAtHead(Node* &head,Node* &tail,int val) {
        sz++;
        Node* newNode = new Node (val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    
    void addAtTail(Node* & head,Node *&tail,int val) {
        sz++;
        Node* newNode = new Node (val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    
    void addAtIndex(Node*head, Node * tail,int index, int val) {
        if(index > sz)
        {
            return;
        }
        if(index == 0)
        {
            addAtHead(head,tail,val);
            return;
        }
        if(index == sz)
        {
            addAtTail(head,tail,val);
            return;
        }
        sz++;
        Node* newNode = new Node (val);
        Node* tmp = head;
        for(int i=1; i<index; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
        newNode->prev = tmp;
        newNode->next->prev = newNode;
    }
    
    void deleteAtIndex(Node*& head,Node * &tail,int index) {
        if(index >= sz) 
        {
            return;
        }
        if(index == sz-1)
        {
            sz--;
            Node* deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;
            if(tail == NULL)
            {
                head = NULL;
                return;
            }
            tail->next = NULL;
            return;
        }
        if(index == 0)
        {
            sz--;
            Node* deleteNode = head;
            head = head->next;
            delete deleteNode;
            if(head == NULL)
            {
                tail = NULL;
                return;
            }
            head->prev = NULL;
            return;
        }
        sz--;
        Node* tmp = head;
        for(int i=1; i<index; i++)
        {
            tmp = tmp->next;
        }
        // Node * delNode = tmp->next;
        // tmp->next->next->prev = tmp;
        // tmp->next = tmp->next->next;
        // tmp->next = delNode->next;
        // delNode->next->prev = tmp;
        // delete delNode;
        Node * delNode = tmp->next;
        tmp->next = tmp->next->next;
        tmp->next->prev = tmp;
        delete delNode;
    }
    void print(Node * head)
    {
        Node * tmp = head;
        while (tmp != NULL)
        {
            cout<<tmp->val<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
    }
    void r_print(Node * tail)
    {
        Node * tmp = tail;
        while (tmp != NULL)
        {
            cout<<tmp->val<<" ";
            tmp = tmp->prev;
        }
        cout<<endl;
    }
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    while(true)
    {
        int c;
        cin>>c;
        if(c == 0)//insert head
        {
            int val;
            cin>>val;
            addAtHead(head,tail,val);
        }
        else if(c == 1)//insert tail
        {
            int val;
            cin>>val;
            addAtTail(head,tail,val);
        }
        else if(c == 2) // insert any position
        {
            int val,p;
            cin>>p>>val;
            addAtIndex(head,tail,p,val);
        }
        else if(c == 3)
        {
            int p;
            cin>>p;
            deleteAtIndex(head,tail,p);
        }
        else if(c == 4)
        {
            print(head);
            r_print(tail);
        }
        else if(c == 5)
        {
            break;
        }
    }
    return 0;
}