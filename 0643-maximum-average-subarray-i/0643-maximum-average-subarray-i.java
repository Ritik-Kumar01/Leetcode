class Solution {
    public double findMaxAverage(int[] nums, int k) {
                
                int sum=0;
                for(int i=0;i<k;i++){
                    sum+=nums[i];
                }
                int maxi=sum;
                int j=0;
                for(int i=k;i<nums.length;i++){
                    sum+=nums[i];
                    sum-=nums[j];
                    j++;
                    maxi = Math.max(maxi, sum);

                }
                return (double)maxi/k;
        
    }
}