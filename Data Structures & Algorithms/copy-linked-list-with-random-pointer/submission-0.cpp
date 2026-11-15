/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* cur = head;
        Node* nex = head;

        while(cur!=NULL){
            nex = cur->next;
            Node* newnode = new Node(cur->val);
            cur->next = newnode;
            newnode->next = nex;
            cur = nex;
        }

        cur = head;
        nex = head;

        while(cur!=NULL){
            nex = cur->next->next;
            if(cur->random !=NULL){
                cur->next->random = cur->random->next;
            }
            cur = nex;
        }

        cur = head;
        nex = head;
        Node*res = new Node(0);
        Node*dummy = res;

        while(cur!=NULL){
            nex = cur->next->next;
            dummy->next = cur->next;
            cur->next = nex;
            dummy = dummy->next;
            cur = nex;
        }
        return res->next;


    }
};


















