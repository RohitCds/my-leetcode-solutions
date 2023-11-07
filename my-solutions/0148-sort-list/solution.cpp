/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* temp = NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL&&fast->next!=NULL){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next=NULL;
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(slow);
        return MergeList(l1, l2);
    }
    ListNode* MergeList(ListNode* left, ListNode* right){
        ListNode dummy(0);
        ListNode* current = &dummy;
        while(left!=NULL&&right!=NULL){
            if(left->val<=right->val){
                current->next = left;
                left = left->next;
            } else {
                current->next = right;
                right = right->next;
            }
            current = current->next;
        }
        if(left!=NULL) {
            current->next = left;
        } else if(right!=NULL){
            current->next = right;
        }
        return dummy.next; //as dummy is not a pointer we use '.'
    }
};
