/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    if(head == NULL) return NULL;
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next; //slow di 1 buoc
        fast = fast->next->next; //fast di buoc thu hai
    }
    return slow;
}