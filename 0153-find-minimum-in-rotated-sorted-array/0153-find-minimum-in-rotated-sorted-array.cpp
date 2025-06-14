class Solution {
public:
    int findMin(vector<int>& nums) {

        // int min = *min_element(nums.begin(),nums.end());
        // return min;
        // int n=nums.size();
        // int a=0;
        // int b=0;
        // int c=INT_MAX;
        // if()
            
        // for(int i=0;i<n/2;i++){
        //     a=nums[i];
        //     b=nums[n-i-1];
        //     c=min(c,min(a,b));

        // }return c;
        

         int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return nums[left];
    }
};