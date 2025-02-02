class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int el =0;
        // int count = 0;
        // for(int i=0;i<nums.size();i++){
        //     if(count==0){
        //         el = nums[i];
        //     }
        //     if(el == nums[i]) count++;
        //     else count--;
        // }
        // return el;

        unordered_map<int,int> count;
        int majorityele=0;

        for(int i = 0 ; i<nums.size();i++){
            count[nums[i]]++;

          majorityele = max(majorityele, count[nums[i]]);
        }
       
        int maxans = 0 ;
        for(int i=0;i<nums.size();i++){
            if(majorityele==count[nums[i]]){
                maxans = nums[i];
            }
        }
        return maxans;
        
    }
};