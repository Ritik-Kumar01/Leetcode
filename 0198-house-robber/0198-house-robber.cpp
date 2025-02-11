class Solution {
public:

    int solve(vector<int>nums, int i , int n){
        if(i>=n){
            return 0;
        }

        int steal = nums[i] + solve(nums,i+2,n);
        int skip = solve(nums,i+1,n);

        return max(steal,skip);
    }
    int rob(vector<int>& nums) {
        // int n = nums.size();
        // if (n==0) return 0;
        // if(n==1) return nums[0];
        // vector<vector<int>> dp(n,vector<int>(2));
        // dp[0][0]=0; dp[0][1]=nums[0];

        // for(int i=1;i<n;i++){
        //     dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
        //     dp[i][1] = dp[i-1][0] + nums[i];
        // }
        // return max(dp[n-1][0],dp[n-1][1]);


        int n = nums.size();

        return solve(nums,0,n);
    }
};