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
        
        ListNode* current   = head;

        for(int i=1;i<=n;i++){
            current = current ->next;
        }

        if(current==NULL){
            ListNode* result = head->next;
            delete(head);
            return result;
        }

        ListNode* prev = head;

        while(current!=NULL && current->next!=NULL){
            current = current->next;
            prev=prev->next;
        }
       
        prev->next = prev->next->next;
        return head;

    }
};