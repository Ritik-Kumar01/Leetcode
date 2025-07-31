class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // vector<int>ori=candies;
        // sort(candies.begin(),candies.end());
        // vector<bool>result;
        // int max=candies[candies.size()-1];
        // for(int i =0;i<ori.size();i++){
        //     if( ori[i]+extraCandies>=max){
          
        //         result.push_back(true);
        //     }
        //     else{
        //         result.push_back(false);
        //     }
        // }
        //  int maxCandies = *max_element(candies.begin(), candies.end()); 

        // vector<bool> result; 
        
        // for (int candy : candies) {
         
        //     result.push_back(candy + extraCandies >= maxCandies);
        // }
        
        // return result;  



    //     vector<bool> result;

    //     int maxcandie = *max_element(candies.begin(),candies.end());

    //     for(int i=0 ;i<candies.size();i++){
    //         if(maxcandie<= candies[i]+extraCandies){
    //             result.push_back(true);
    //         }
    //         else{
    //         result.push_back(false);}
    //     }
    // return result;


    vector<bool> result;
    int maxcandies = *max_element(candies.begin(),candies.end());

    for(int candy : candies){
        result.push_back(maxcandies<=candy+extraCandies);
    }
    return result;
    }
    
};