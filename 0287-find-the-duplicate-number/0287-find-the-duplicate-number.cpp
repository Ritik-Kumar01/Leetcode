class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         
        //  unordered_set<int> st;

        //  for(int i = 0 ;i<nums.size();i++){
        //     if(st.count(nums[i])==1){
        //          return nums[i];
        //     }
        //     st.insert(nums[i]);
        //  }
        //  return {-1};


        // vector<int> freq(nums.size(),0);

        // for(int x : nums){
        //     freq[x]++;
        //     if(freq[x]>1) return x;
        // }
        // return -1;


    //     unordered_set<int> st;

    //     for(int i=0;i<nums.size();i++){
    //         if(st.count(nums[i])==1){
    //             return nums[i];
    //         }
    //         st.insert(nums[i]);
    //     }
    //     return 0;



    unordered_set<int> st;

    for(int x : nums){

        if(st.count(x)==1){
            return x;
        }
        st.insert(x);
    }
    return -1;
    }
};