class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int left = 0 ; int right = nums.size() -1;

        // while(left<right){
        //     int mid = (left+right)/2;

        //     if(nums[mid] > nums[mid+1]){
        //         right = mid;
        //     }

        //     else{
        //         left = mid+1;
        //     }
        // }
        // return left;


        if(nums.size()==1) return 0;

        for(int i = 0 ;i<nums.size();i++){
            if(i==0 && nums[i]>nums[i+1]) return 0;
            if(i==nums.size()-1 && nums[i]>nums[i-1]) return nums.size()-1;

            if(nums[i]>nums[i+1] && nums[i]>nums[i-1]) return i;
        }
        return -1;
    }
};