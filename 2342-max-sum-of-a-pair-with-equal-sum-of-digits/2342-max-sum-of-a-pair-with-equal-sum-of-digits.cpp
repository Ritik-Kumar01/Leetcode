class Solution {
public:

int FindDigits(int num){
    int sum = 0 ;
    while(num>0){
        sum += num%10;

        num /= 10;
    }
    return sum;
}
    int maximumSum(vector<int>& nums) {
        

        int result  = -1;
        // for(int i= 0 ; i<nums.size();i++){
        //     int Digitsi = FindDigits(nums[i]);
        //     for(int j = i+1;j<nums.size();j++){
        //         int Digitsj = FindDigits(nums[j]);
        //         if(Digitsi==Digitsj){
        //             result = max(result,nums[i]+nums[j]);
        //         }
        //     }
        // }
        // return result;


        unordered_map<int,int> mp;

        for(int i = 0 ; i<nums.size();i++){
            int DigitSum  = FindDigits(nums[i]);

            if(mp.count(DigitSum)){
                result = max(result, nums[i]+mp[DigitSum]);
            }

            mp[DigitSum] = max(mp[DigitSum],nums[i]);
        }
        return result;
    }
};