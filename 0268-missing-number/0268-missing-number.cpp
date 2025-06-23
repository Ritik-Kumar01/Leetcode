class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // sort(nums.begin(),nums.end());
        // int i;

        // for( i = 0 ; i<nums.size();i++){
        //     if(nums[i]==i){
        //         continue;
        //     }
        //     if(nums[i]!=i){
        //         return i;
        //     }
          
        // }
        // return i;

          int n = nums.size();
          vector<int>hash(n+1,0);

        for(int i=0; i<nums.size();i++){
            hash[nums[i]]++;
        }

        for(int i=0;i<=nums.size();i++){
            if(hash[i]==0){
               return i;
            }
        }
        return -1;
    }
};