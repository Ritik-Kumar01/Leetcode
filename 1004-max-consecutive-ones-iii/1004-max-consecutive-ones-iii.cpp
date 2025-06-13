class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int zerocount = 0;
        // int start = 0;
        //  int max_ones = 0;

        //  for(int end=0;end<nums.size();end++){
        //     if(nums[end]==0){
        //         zerocount++;
        //     }

        //     while(zerocount>k){
        //         if(nums[start]==0){
        //             zerocount--;
        //         }
        //         start++;
        //     }
        //     max_ones = max(max_ones,end-start+1);
        //  }
        //  return max_ones;


        int count = 0;
        int start = 0;
        int maxones = 0;

        for(int end=0;end<nums.size();end++){

            if(nums[end]==0){
                count++;
            }

            while(count>k){
                if(nums[start]==0){
                    count--;
                }
                start++;
            }
            



            maxones = max(maxones,end-start+1);
        }
        return maxones;
    }
};