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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

          vector<int>vec;

          while(list1!=nullptr){
            vec.push_back(list1->val);
            list1 = list1->next;
          }

          while(list2!=nullptr){
            vec.push_back(list2->val);
            list2 = list2->next;
          }

          if(vec.empty()) return nullptr;

          sort(vec.begin(),vec.end());

          ListNode* head = new ListNode(vec[0]);

          ListNode* current = head;

          for(int i = 1 ; i<vec.size();i++){
            current->next = new ListNode(vec[i]);
            current = current->next;
          }
          return head;
    }
};