class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // int left = 0;
        // int maxlength = 0;
        // unordered_set<int> set;

        // for(int right=0;right<s.length();right++){
        //     if(set.count(s[right])==0){
        //         set.insert(s[right]);
        //         maxlength = max(maxlength,right-left+1);
        //     }

        //     else{
        //         // while(set.count(s[right])){
        //             while(set.find(s[right])!= set.end()){
        //             set.erase(s[left]);
        //             left++;
        //         }   
        //     }
        //     set.insert(s[right]);

        // }
        // return maxlength;

        int left = 0;
        int maxlength = 0;
        unordered_set<int>st;

        for(int right=0;right<s.length();right++){
          if(st.count(s[right])==0){
            st.insert(s[right]);
            maxlength = max(maxlength,right-left+1);
          }
          else{
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
          }
          st.insert(s[right]);
        }
        return maxlength;
    }
};