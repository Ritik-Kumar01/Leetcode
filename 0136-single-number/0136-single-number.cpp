class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
    //      int result = 0;
    // for (int num : nums) {
    //     result ^= num;  // XOR all elements
    // }
    // return result;


    // sort(nums.begin(),nums.end());
    // int n = nums.size();

    // for(int i=0;i<n-1;i+=2){
    //     if(nums[i]!=nums[i+1]){
    //         return nums[i];
    //     }
    // }
    // return nums[n-1];

    unordered_map<int,int> freq;

    for(int num : nums){
        freq[num]++;
    }

    for(auto pair : freq){
        if(pair.second==1){
            return pair.first;
        }
    }
    return -1;
    }
};