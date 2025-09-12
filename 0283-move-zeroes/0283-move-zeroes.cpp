class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector<int>zero;
        // vector<int>nonzero;

        // for(int num:nums){
        //     if(num!=0){
        //         nonzero.push_back(num);
        //     }
        // }

        // for(int num:nums){
        //     if(num==0){
        //         zero.push_back(num);
        //     }
        // }
        //  int i = 0;
        // for(int non:nonzero){
        //     nums[i++]= non;
            
            
        // }

        // for(int ze : zero){
        //     nums[i++] = ze;
            
        // }


        vector<int>zero;
        vector<int>nonzero;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nonzero.push_back(nums[i]);
            }
            else{
                zero.push_back(nums[i]);
            }
        }
         int i = 0;
        for(int num:nonzero){
            nums[i++]= num;
        }
        for(int num:zero){
            nums[i++]=num;
        }
        
    }
};