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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* current = head;
        ListNode* prev = NULL;
        int l = 0;
        while(current!=NULL){
            l++;
            current = current->next;
        }

        int eachBucketNodes = l/k;
        int remainingNodes = l%k;

        current = head;
        vector<ListNode*> result(k,NULL);

        for(int i=0; i<k && current!=NULL ;i++){
            result[i] = current;

            for(int count =1 ; count<=eachBucketNodes + ((remainingNodes)>0 ? 1 : 0 ); count++){
                prev = current;
                current = current->next;
            }
            prev->next = NULL;
            remainingNodes--;
        }

        return result;
    }
};