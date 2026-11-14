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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr || n == 0)return head;
        int count = 0;
        ListNode* dummy = head;
        while(dummy!=nullptr){
            dummy = dummy->next;
            count++;
        }
        if(n == count)return head->next;
        ListNode* slow = head;
        
        int k = count-n-1;
        while(k--){
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;

    }
};
