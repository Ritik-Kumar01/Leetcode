class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hp;

        for(int i=0;i<nums.size();i++){
            hp[nums[i]]++;
            if(hp[nums[i]]>=2){
                return true;
            }
        }
return false;
        
        
    }
};