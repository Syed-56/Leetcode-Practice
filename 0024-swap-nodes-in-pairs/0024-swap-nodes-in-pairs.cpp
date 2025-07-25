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
    ListNode* swapPairs(ListNode* head) {
        int k=2;
        ListNode* curr = head;
        for(int i=0; i<k; i++) {
            if(!curr)   return head;    //base case
            curr = curr->next;
        }

        ListNode* prevNode = swapPairs(curr);
        ListNode* tempHead = head;
        for(int i=0; i<k; i++) {
            ListNode* currNext = tempHead->next;
            tempHead->next = prevNode;
            prevNode = tempHead;
            tempHead = currNext;
        }
        return prevNode;
    }
};