class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // int rightsum = 0;

        // for(int num : nums){
        //     rightsum += num;
        // }

        // int leftsum = 0;

        // for(int i = 0 ; i<nums.size();i++){
         
        //  rightsum -= nums[i];

        //  if(leftsum == rightsum){
        //     return i;
        //  }

        //  leftsum += nums[i];

        // }
        // return -1;


        int n = nums.size();
    
    // Iterate through each index
    for (int i = 0; i < n; ++i) {
        // Calculate left sum
        int leftSum = 0;
        for (int j = 0; j < i; ++j) {
            leftSum += nums[j];
        }
        
        // Calculate right sum
        int rightSum = 0;
        for (int j = i + 1; j < n; ++j) {
            rightSum += nums[j];
        }
        
        // Check if left sum equals right sum
        if (leftSum == rightSum) {
            return i;
        }
    }
    
    // Return -1 if no pivot index found
    return -1;
    }
};