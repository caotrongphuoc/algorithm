/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {

    if(head == NULL || head->next == NULL) return NULL;

    struct ListNode* fast = head;
    struct ListNode* slow = head;

    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
        struct ListNode* ptr = head;
        while(ptr != slow) {
            slow = slow->next;   
            ptr = ptr->next;
        }
        return ptr;
        }
    }
    return NULL;
}