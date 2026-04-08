/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) 
{
    struct ListNode *fast = head;
    struct ListNode *slow = head;  
    for(int i = 0; i < n; i++)
    {
        if(fast == NULL)
        {
            return head;
        }
        fast = fast->next;
    }
    if(fast == NULL)
    {
        struct ListNode* temp = head->next;
        free(head);
        return temp;
    }
    while(fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    struct ListNode *notetoDelete = slow->next;
    slow->next = slow->next->next;
    free(notetoDelete);
    return head;
}