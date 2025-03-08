class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        // int i = 0, j =1;

        // while(j<n){
        //     if(nums[i]!=nums[j]){   // got a unique element
        //         i++;
        //         nums[i] = nums[j];
        //     }
        //     j++;
        // cout<<nums[i]<<" ";
        // }
        // return i+1;   // to find the unique element

        vector<int>vec;

        for(int num : nums){
            if(vec.empty() || vec.back()!=num){
                vec.push_back(num);
            }
        }
                nums = vec;
        return vec.size();
    }
};