class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // int currSum = 0;
        // int maxsum = INT_MIN;

        // for (int i = 1; i < nums.size(); i++) {
        //     currSum = max(nums[i], currSum + nums[i]);
        //     maxSum = max(maxSum, currSum);
        // }

        // return maxSum;
        
        // for(int i=0;i<nums.size();i++){
            
        //     currSum += nums[i];
        //     maxsum = max(currSum, maxsum);

        //     if(currSum<0){
        //         currSum = 0;
        //     }
        // }
        // return maxsum;


        int maxsum = INT_MIN;
        int sum = 0;

        for(int i=0;i<nums.size();i++){

            sum += nums[i];

            maxsum = max(maxsum ,sum);

            if(sum<0){
                sum = 0;
            }
        }
        return maxsum;
    }
};