class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int maxsum = INT_MIN;
        // int sum = 0;
       
        // for(int i = 0 ; i<prices.size();i++){
     
        //     for(int j = i+1;j<prices.size();j++){
        //         if(prices[i]<prices[j]){
        //             sum = max(sum,prices[j]-prices[i]);
        //        
        //         }
        //     }
        // }
        // return sum;

        // int minprice = INT_MAX;
        // int maxprofit = 0;

        // for(int price : prices){
        //     minprice = min(minprice,price);
        //     maxprofit = max(maxprofit,price-minprice);
        // }
        // return maxprofit;

        // int buy = prices[0];
        // int profit = 0;

        // for(int i = 1; i<prices.size();i++){
        //     if(prices[i]<buy){
        //         buy = prices[i];
        //     }
        //     profit = max(profit,prices[i]-buy);
        // }
        // return profit;


        int price = prices[0];

        int maxprofit = 0;

        for(int i=1; i<prices.size();i++){
            int mini = min(price,prices[i]);
            price = mini;
            maxprofit = max(maxprofit,prices[i]-mini);
        }
        return maxprofit;
    }
};