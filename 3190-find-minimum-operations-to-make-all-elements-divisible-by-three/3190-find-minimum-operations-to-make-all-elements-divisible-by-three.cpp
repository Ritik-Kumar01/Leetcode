class Solution {
public:
    int minimumOperations(vector<int>& nums) {

     

        int count = 0; 

        for(int s : nums){
            if(s%3!=0){
                count++;
            }
        }
       return count; 
    }
};