/*
Problem: #2 - Add Two Numbers
Platform: LeetCode
Difficulty: Medium
Approach: Dummy Node + Linked List Traversal + Carry Propagation

Time Complexity: O(max(n, m))
Space Complexity: O(max(n, m))
*/

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
        ListNode* result = new ListNode(0);
        ListNode* i = l1;
        ListNode* j = l2;
        ListNode* k = result;
        int carry = 0;

        while(i != NULL && j != NULL){
            if((i->val + j->val + carry) < 10){
                int data = i->val + j->val + carry;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                carry = 0;
            }
            else{
                int x = i->val + j->val + carry;
                int data = x % 10;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                x = x / 10;
                carry = x % 10;
            }

            i = i->next;
            j = j->next;
        }

        while(j != NULL){
            if((j->val + carry) < 10){
                int data = j->val + carry;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                j = j->next;
                carry = 0;
            }
            else{
                int x = j->val + carry;
                int data = x % 10;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                x = x / 10;
                carry = x % 10;
                j = j->next;
            }
        }

        while(i != NULL){
            if((i->val + carry) < 10){
                int data = i->val + carry;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                i = i->next;
                carry = 0;
            }
            else{
                int x = i->val + carry;
                int data = x % 10;
                ListNode* temp = new ListNode(data);
                k->next = temp;
                k = k->next;
                x = x / 10;
                carry = x % 10;
                i = i->next;
            }
        }

        if(carry != 0){
            ListNode* temp = new ListNode(carry);
            k->next = temp;
            k = k->next;
        }

        return result->next;
    }
};
