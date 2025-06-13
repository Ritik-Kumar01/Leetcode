class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // vector<int>vec;
        // for (int i = 0; i < n - 1; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (nums[i] + nums[j] == target) {
        //             vec.push_back(i);
        //             vec.push_back(j);
        //         }
        //     }
        // }
        // return vec; 

        map<int,int> mp;

        for(int i=0;i<n;i++){
            int remaining = target - nums[i];

            if(mp.find(remaining)!=mp.end()){
                return {mp[remaining],i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};