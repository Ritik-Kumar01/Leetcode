class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> vec;

        for(int i =0 ; i<nums.size();i++){
            if(nums[i]<pivot){
                vec.push_back(nums[i]);
            }
        }

        for(int i =0 ; i<nums.size();i++){
            if(nums[i]==pivot){
                vec.push_back(nums[i]);
            }
        }

         for(int i =0 ; i<nums.size();i++){
            if(nums[i]>pivot){
                vec.push_back(nums[i]);
            }
        }

        return vec;
        
    }
};