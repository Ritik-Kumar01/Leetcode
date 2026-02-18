class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if (nums.empty()) return 0;

        // sort(nums.begin(), nums.end());

        // int maxCount = 1;
        // int count = 1;

        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == nums[i - 1]) {
        //         continue; // skip duplicates
        //     }
        //     else if (nums[i] == nums[i - 1] + 1) {
        //         count++;
        //     }
        //     else {
        //         count = 1;
        //     }
        //     maxCount = max(maxCount, count);
        // }

        // return maxCount;

        // if(nums.empty()) return 0;
        
        // sort(nums.begin(),nums.end());

        // int maxcount = 1;
        // int count = 1;

        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]){
        //         continue;
        //     }
        //     else if(nums[i]==nums[i-1]+1){
        //         count++;
        //     }
        //     else{
        //         count =1;
        //     }
        //     maxcount = max(maxcount,count);
        // }
        // return maxcount;


        if(nums.empty()) return 0;

        sort(nums.begin(),nums.end());

        int count = 1;
        int maxcount = 1;

        for(int i = 1 ;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                continue;
            }
            else if(nums[i]==nums[i-1]+1){
             count++;
            }
            else{
                count =1;
            }
            maxcount = max(maxcount,count);
        }
        return maxcount;
    }
};
