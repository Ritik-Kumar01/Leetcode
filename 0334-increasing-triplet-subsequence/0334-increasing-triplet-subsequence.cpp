class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int num1 = INT_MAX;
        int num2 = INT_MAX;

        for(int i=0;i<nums.size();i++){

            int num3 = nums[i];
            if(num1>=num3){
                num1 = num3;
            }
            else if(num2>=num3){
                num2 = num3;
            }
            else{
                return true;
            }
        }
        return false;


    //     int n = nums.size();
    // for (int i = 0; i < n-2; i++) {
    //     for (int j = i + 1; j < n -1; j++) {
    //         for (int k = j + 1; k < n; k++) {
    //             if (nums[i] < nums[j] && nums[j] < nums[k]) {
    //                 return true;
    //             }
    //         }
    //     }
    // }
    // return false;
    }
};