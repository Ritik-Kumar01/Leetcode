class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        //  sort(nums.begin(),nums.end());
        // int left = 0 ; 
        //  int right = nums.size()-1;
        //   int count = 0;
        //  while(left<right){
        //     if(nums[left]+nums[right]>k){
        //                right--;
        //     }
        //     else if(nums[left]+nums[right]<k){
        //         left++;
        //     }
        //     else if(nums[left]+nums[right]==k){
        //         right--;
        //         left++;
        //         count++;
        //     }
        //  }
        // return count;



        unordered_map<int,int> freq;
         int count = 0 ;
        for(int num : nums){
            int complement = k - num;

            if(freq.find(complement)!=freq.end() && freq[complement]>0){
                count++;
                freq[complement]--;
            }
           else{
            freq[num]++;
           }
            
        }
        return count;
    }
};