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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)return head;
        ListNode* dummy = nullptr;
        ListNode* nex = head;
        ListNode* cur = head;

        while(nex!=nullptr){
            nex = cur->next;
            cur->next = dummy;
            dummy = cur;
            cur = nex;
        }
        return dummy;
    }
};
