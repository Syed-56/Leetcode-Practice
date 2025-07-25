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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1->val ==0 && l2->val==0)   return new ListNode(0);
        int num1=0, num2=0;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        while(curr1 || curr2) {
            if(curr1) {
                num1 *= 10;
                num1 += curr1->val;
                curr1 = curr1->next;
            }
            if(curr2) {
                num2 *= 10;
                num2 += curr2->val;
                curr2 = curr2->next;
            }
        }

        int sum = num1+num2;
        ListNode* ans = NULL;
        ListNode* tail;
        while(sum) {
            int digit = sum%10;
            ListNode* newNode = new ListNode(digit);

            if(!ans) {
                ans = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = tail->next;
            }
            sum /= 10;
        }
        return ans;
        }
};