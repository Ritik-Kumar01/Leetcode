class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        

    //   int insertposition = 0;
    //   for(int i=0; i<nums.size();i++){
    //     if(nums[i]!=0){
    //         nums[insertposition++] = nums[i];
    //     }
    //   }  

    //   while(insertposition<nums.size()){
    //     nums[insertposition++]=0;
    //   }


     vector<int> nonzero;
     vector<int> zero;

     for(int num : nums){
      if(num != 0){
        nonzero.push_back(num);
      }

      else{
        zero.push_back(num);
      }
     }

    int index = 0;
    for(int num : nonzero){
        nums[index++] = num;
    }
    for(int num : zero){
        nums[index++] = num;
    }
    }
};