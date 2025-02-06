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
// Fisrst approch - Brute force
// T.C. - o(n) and space complexity also o(n) bcz we have used an extra vector.

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
        
//         vector<int> result;

//         ListNode* current = head;
//         while(current!=NULL){
//             result.push_back(current->val);
//             current =current->next;
//         }

//         int i = 0; int j = result.size()-1;
//         while(i<j){
//             if(result[i]!=result[j]){
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         return true;

//     }
// };



// 2nd approach

class Solution {

    ListNode* reverseLinkedList(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* last = reverseLinkedList(head->next);
        head->next->next = head;
        head->next = NULL;
        return last;
    }
public:
    bool isPalindrome(ListNode* head) {

         if(head==NULL || head->next==NULL){
            return true;
        }
        
       ListNode* fast = head;
       ListNode* slow = head;
       ListNode* prev =NULL;

       while(fast!=NULL && fast->next!=NULL){
          prev = slow;
          slow =slow->next;
          fast = fast->next->next;
       }

       ListNode* tail=reverseLinkedList(slow);
       prev->next =NULL;

       while(tail!=NULL && head!=NULL){
        if(tail->val!=head->val){
            return false;
        }
        tail =tail->next;
        head = head->next;
       }
       return true;
    }
};