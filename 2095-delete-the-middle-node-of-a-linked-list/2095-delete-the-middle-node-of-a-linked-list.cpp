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
    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return NULL;
        }

        ListNode* prevslow = NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            prevslow = slow;

            slow = slow -> next;
            fast = fast->next ->next;
        }

        prevslow ->next = slow -> next;
        // delete(slow);
        return head;


        // ListNode* temp = head;
        
        // int length = 0;
        // while(temp!=NULL){
        //     length++;
        //     temp = temp->next;
        // }

        // int median = length/2;

        // temp = head;
        // for(int i = 0; i<median -1;i++){
        //     temp= temp->next;
        // }
        
        // temp -> next = temp ->next ->next;
        // return head;
        
    }
};