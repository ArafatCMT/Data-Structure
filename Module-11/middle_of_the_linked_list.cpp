
class Solution {
public:
    int size_list(ListNode *head)
    {
        int count = 0;
        ListNode * tmp = head;
        while(tmp != NULL)
        {
            count++;
            tmp = tmp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int sz = size_list(head);
        ListNode * tmp = head;
        for(int i=1; i<=sz/2; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};