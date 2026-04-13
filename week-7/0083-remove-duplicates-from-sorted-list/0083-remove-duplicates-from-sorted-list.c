/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    if(head == NULL) return NULL;
    struct ListNode* curr = head;
    while(curr != NULL && curr->next != NULL)
    {
        if(curr->next->val == curr->val)
        {
            curr->next = curr->next->next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}