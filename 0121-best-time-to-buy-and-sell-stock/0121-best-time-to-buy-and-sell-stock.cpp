class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int maxsum = INT_MIN;
        // int sum = 0;
        // bool check = true;
        // for(int i = 0 ; i<prices.size();i++){
        //     sum = 0;
        //     for(int j = i+1;j<prices.size();j++){
        //         if(prices[i]<prices[j]){
        //              sum = prices[j] - prices[i];
        //              maxsum = max(sum,maxsum);
        //              check =false;
        //         }
        //     }
        // }
        //         if(check==true){
        //             return 0;
        //         }
        // return maxsum;

        int minprice = INT_MAX;
        int maxprofit = 0;

        for(int &price : prices){
            minprice = min(minprice,price);
            maxprofit = max(maxprofit,price-minprice);
        }
        return maxprofit;
    }
};