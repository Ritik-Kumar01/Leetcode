class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    //    int sum = 0;
    //    for(int i=0;i<k;i++){
    //     sum += nums[i];
    //    }

    //    int maxsum = sum;

    //    int startIndex = 0;
    //    int endIndex = k;

    // //    while(endIndex<nums.size()){
              
    // //        sum -=nums[startIndex];
    // //        startIndex++;

    // //        sum +=nums[endIndex];
    // //        endIndex++;

    // //        maxsum = max(maxsum,sum);   
    // //    }

    // for (int i = k; i < nums.size(); i++) {
    //         sum = sum - nums[i - k] + nums[i];
    //         maxsum = max(maxsum, sum);
    //     }
    //  return (double) maxsum/k;
    


    int sum = 0 ;
    for(int i=0; i<k;i++){
        sum += nums[i];
    }
    int maxsum = sum;
    int startIndex = 0 ;
    int endIndex = k;

    while(endIndex<nums.size()){
        sum -= nums[startIndex];
        startIndex++;

        sum += nums[endIndex];
        endIndex++;

        maxsum = max(maxsum,sum);
    }
     return (double) (maxsum)/k;
    }
};