class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //     int sum = 0;
    //     int maxsum = INT_MIN;
    //     for(int i = 0 ; i<nums.size();i++){
    //         sum = 0;
    //         for(int j=i;j<nums.size();j++){
    //             sum = sum + nums[j];
    //             maxsum = max(maxsum,sum);
    //             // cout<<maxsum<<" ";
    //         }
    //     }
    //    return maxsum; 

    // int sum  = 0;
    // int maxsum  = INT_MIN;
    // for(int i = 0 ; i<nums.size();i++){

    //     sum +=nums[i];

        
    //     maxsum = max(maxsum,sum);
    //     if(sum<0){
    //         sum = 0;
    //     }

    // }
    // return maxsum;

    // if we need to  print the full subarray

    // int sum  = 0;
    // int maxsum  = INT_MIN;
    // int startindex = -1;
    // int endindex = -1;
    // for(int i = 0 ; i<nums.size();i++){
    //  if(sum==0) start = i;
    //     sum +=nums[i];

        
    //    if(maxsum<sum){
    //     maxsum = sum;
    //     startindex = start ; endindex = i;
    //    }
    //     if(sum<0){
    //         sum = 0;
    //     }

    // }
    // return maxsum;

    int sum = 0 ;
    int maxsum = INT_MIN;

    for(int i=0;i<nums.size();i++){
        sum += nums[i];
    maxsum = max(maxsum,sum);

    if(sum<0){
        sum = 0;
    }
    }


   return maxsum;
    }
};