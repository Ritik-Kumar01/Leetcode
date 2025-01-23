class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
      unordered_map<int, int> prefixCount;
    int currentSum = 0, result = 0;

    
    prefixCount[0] = 1;

    for (int num : nums) {
     
        currentSum += (num % 2);

   
        if (prefixCount.find(currentSum - k) != prefixCount.end()) {
            result += prefixCount[currentSum - k];
        }


        prefixCount[currentSum]++;
    }

    return result;
    }
};