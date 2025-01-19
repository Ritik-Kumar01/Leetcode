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
    int pairSum(ListNode* head) {

        // vector<int> vec;
        // ListNode* current = head;

        // while(current!=NULL){
        //     vec.push_back(current->val);
        //     current = current -> next;
        // }
        
        // int result = 0;
        // int i = 0 ; int j = vec.size()-1;


        // while(i<j){

        //     result = max(result,vec[i]+vec[j]);
        //     i++;
        //     j--;
        // }
        // return result;

        stack<int> sc;

        ListNode* current = head;

        while(current!=NULL){
            sc.push(current->val);
            current = current->next;
        }

        int m = sc.size();
        int result = 0;

        current = head;

        for(int i =0 ; i<m;i++){
           result = max(result, current->val + sc.top());
           current = current->next;
           sc.pop();
        }
        return result;
        
    }
};