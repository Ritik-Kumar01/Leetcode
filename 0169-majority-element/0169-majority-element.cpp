class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // unordered_map<int,int>count;
        // int majorityele = 0;

        // for(int i =0;i<nums.size();i++){
        //      count[nums[i]]++;
        //      majorityele = max(majorityele, count[nums[i]]);
        // }

        // int maxans = 0;

        // for(int i=0;i<nums.size();i++){
        //     if(majorityele == count[nums[i]]){
        //         maxans=nums[i];
        //         break;
        //     }
        // }
        // return maxans;

       unordered_map<int,int>mp;
       int maxelement = INT_MIN;

       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
        maxelement = max(maxelement,mp[nums[i]]);
       }
     int maxans;
       for(int i = 0 ; i<nums.size();i++){
        if(maxelement==mp[nums[i]]){
            maxans = nums[i];
            break;
        }
       }
       return maxans;
    }
};