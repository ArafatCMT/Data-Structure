class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * tmp = head;
        if(head == NULL)
        {
            return head;
        }
        while(tmp != NULL)
        {
            if(tmp->next == NULL)
            {
                break;
            }
            else if(tmp->val == tmp->next->val)
            {
                ListNode * deleteNode = tmp->next;
                tmp->next = deleteNode->next;
                delete deleteNode;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        return head;
    }