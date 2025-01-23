class Solution {
public:
    int findMaxLength(vector<int>& nums) {

    unordered_map<int, int> hashMap; 
    int maxLength = 0, count = 0;

    hashMap[0] = -1; 
    for (int i = 0; i < nums.size(); ++i) {
      
        count += (nums[i] == 1 ? 1 : -1);

      
        if (hashMap.find(count) != hashMap.end()) {
            maxLength = max(maxLength, i - hashMap[count]);
        } else {
            hashMap[count] = i;
        }
    }

    return maxLength;
    }
};