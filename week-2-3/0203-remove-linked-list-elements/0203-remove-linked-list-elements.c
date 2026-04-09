/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) 
{
    struct ListNode dummy; //Tao mot not gia
    dummy.next = head; //Not ke tiep la not dau tien

    struct ListNode *curr = &dummy; //Tao mot node la dia chi cua dummy
    while(curr->next != NULL)
    {
        if(curr->next->val == val)
        {
            curr->next = curr->next->next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return dummy.next;
}