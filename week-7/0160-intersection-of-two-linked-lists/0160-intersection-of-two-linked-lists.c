/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA == NULL || headB == NULL) return NULL;
    struct ListNode *currA = headA;
    struct ListNode *currB = headB;
    while (currA != currB) {
        if(currA == NULL) currA = headB;
        else currA = currA->next;
        if(currB == NULL) currB = headA;
        else currB = currB->next;
    }
    return currA;
}