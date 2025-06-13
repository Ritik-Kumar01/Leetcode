class Solution {
public:
    int findMin(vector<int>& nums) {

        // int min = *min_element(nums.begin(),nums.end());
        // return min;
        int n=nums.size();
        int a=0;
        int b=0;
        int c=INT_MAX;
            if(nums.size()==1){
                return nums[0];
            }
        for(int i=0;i<=n/2;i++){
            a=nums[i];
            b=nums[n-i-1];
            c=min(c,min(a,b));

        }return c;
        
    }
};