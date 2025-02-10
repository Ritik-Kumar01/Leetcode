class Solution {
public:

//    int solve(vector<int> &dp, int n){
//     if(n<=1){
//         return n;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }

//     return  dp[n]=solve(dp,n-1)+solve(dp,n-2);
//    }
    int fib(int n) {
        if(n<=1){
            return n;
        }

        // return fib(n-1) + fib(n-2);

        // vector<int> dp(n+1,-1);

        // return solve(dp,n);

        int a = 0, b =1 ,c;

        for(int i = 1 ; i<n;i++){
               c = a+b;
               a = b;
               b = c;
        }
        return c;
        
    }
};