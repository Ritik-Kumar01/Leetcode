class Solution {
public:
// int n;
//   int findMax(vector<int>nums, int skip_idx){
//     int currentlength = 0;
//     int maxlength = 0;

//     for(int i=0;i<n;i++){
//         if(i==skip_idx){
//             continue;
//         }
        
//         if(nums[i]==1){
//             currentlength++;
//             maxlength= max(maxlength,currentlength);
//         } else{
//             currentlength = 0;
//         }


//     }
//     return maxlength;
//   }

    int longestSubarray(vector<int>& nums) {
        // int start = 0;
        // int zeros =0;
        // int maxones = 0;
        // for(int end= 0; end<nums.size();end++){
        //     if(nums[end]==0){
        //         zeros++;
        //     }

        //     while(zeros>1){
        //         if(nums[start]==0){
        //             zeros--;
        //         }

        //         start++;
        //     }

        //     maxones = max(maxones,end-start);
        // }
        // return maxones;



        // brute force

        // n = nums.size();
        
        // int result = 0;
        // int countzero = 0;

        // for(int i=0;i<n;i++){
        //     if(nums[i]==0){
        //         countzero++;
        //         result = max(result,findMax(nums,i));
        //     }
        // }
        //     if(countzero==0){
        //         return n-1;
        //     }
        //     return result;




//simplest approch

int i = 0; 
int j = 0;

int last_zero_idx = -1;
int result = 0;

while(j<nums.size()){
    if(nums[j]==0){
        i = last_zero_idx+1;
        last_zero_idx = j;
    }
    result = max(result,j-i);
    j++;
}

return result;
    }
};