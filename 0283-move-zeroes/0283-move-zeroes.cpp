class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>zero;
        vector<int>nonzero;

        for(int num:nums){
            if(num!=0){
                nonzero.push_back(num);
            }
        }

        for(int num:nums){
            if(num==0){
                zero.push_back(num);
            }
        }
         int i = 0;
        for(int non:nonzero){
            nums[i]= non;
            i++;
            
        }

        for(int ze : zero){
            nums[i] = ze;
            i++;
        }
        
    }
};