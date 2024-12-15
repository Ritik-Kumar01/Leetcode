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
          
        if(head==NULL) {
            cout<<"Err : List is empty"<<endl;
            return head;
        }
        
        if(n<=0) {
            cout<<"Err : Number should be positive"<<endl;
            return head;
        }
        
        ListNode* fast = head;
        ListNode* slow = head;

        for (int i = 1; i <=n; i++) {
            if(fast == NULL && i!=n-1) {
                cout<<"Err : Number is greater than length of List"<<endl;
                return head;
            }
            fast = fast->next;
        }

        if (fast == NULL) {
            return head->next;
        }

        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
    
};