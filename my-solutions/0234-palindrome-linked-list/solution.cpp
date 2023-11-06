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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true; // A single node or empty list is considered a palindrome.
        }

        // Step 1: Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode* secondHalf = NULL;
        while(slow!=NULL){
            ListNode* nexo = slow->next;
            slow->next = secondHalf;
            secondHalf = slow;
            slow= nexo;
        }

        // Step 3: Compare the first and reversed second halves
        while (secondHalf != nullptr) {
            if (head->val != secondHalf->val) {
                return false; // Not a palindrome.
            }
            head = head->next;
            secondHalf = secondHalf->next;
        }

        return true; // The linked list is a palindrome.
    }
};
