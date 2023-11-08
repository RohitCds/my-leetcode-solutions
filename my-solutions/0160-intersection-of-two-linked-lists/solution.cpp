/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lenA = getLength(headA);
        int lenB = getLength(headB);

        ListNode* currA = headA;
        ListNode* currB = headB;

        // Align the starting point for both lists.
        while (lenA > lenB) {
            currA = currA->next;
            lenA--;
        }

        while (lenB > lenA) {
            currB = currB->next;
            lenB--;
        }

        // Iterate through both lists until an intersection is found.
        while (currA != nullptr && currB != nullptr) {
            if (currA == currB) {
                return currA; // Intersection found.
            }
            currA = currA->next;
            currB = currB->next;
        }

        return nullptr; // No intersection found.
    }

private:
    int getLength(ListNode* head) {
        int length = 0;
        ListNode* current = head;
        while (current != nullptr) {
            length++;
            current = current->next;
        }
        return length;
    }
};
