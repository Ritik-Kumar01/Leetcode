class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0 ; int high = nums.size() -1;

        while(low<high){
            int mid = (low+high)/2;

            if(nums[mid] > nums[mid+1]){
                high = mid;
            }

            else{
                low = mid+1;
            }
        }
        return low;


        // if(nums.size()==1) return 0;

        // for(int i = 0 ;i<nums.size();i++){
        //     if(i==0 && nums[i]>nums[i+1]) return 0;
        //     if(i==nums.size()-1 && nums[i]>nums[i-1]) return nums.size()-1;

        //     if(nums[i]>nums[i+1] && nums[i]>nums[i-1]) return i;
        // }
        // return -1;
    }
};