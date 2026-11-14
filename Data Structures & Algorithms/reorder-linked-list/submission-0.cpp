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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* head1 = head;
        ListNode* nex1 = head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head2 = reverseList(slow->next);
        slow->next = nullptr;
        ListNode* nex2 = head2;
        while(head2!=nullptr){
            nex1 = head1->next;
            nex2 = head2->next;
            head1->next = head2;
            head2->next = nex1;
            head1 = nex1;
            head2 = nex2;
        }
    }

    ListNode* reverseList(ListNode* h){
        ListNode* dummy = nullptr;
        ListNode* cur = h;
        ListNode* nex = h;
        while(nex!=nullptr){
            nex = cur->next;
            cur->next = dummy;
            dummy = cur;
            cur = nex;
        }
        return dummy;
    }
    
};
