class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operations = 0;

        while(true){
            unordered_set<int>unique(nums.begin(),nums.end());

            if(nums.size()==unique.size()) break;

            if(nums.size()<=3){
                nums.clear();
            }
            else{
                nums.erase(nums.begin(),nums.begin()+3);
            }
            operations++;
        }
        return operations;
        
    }
};