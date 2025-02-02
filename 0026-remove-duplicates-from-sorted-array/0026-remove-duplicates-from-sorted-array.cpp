class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int n = nums.size();
        
        // int i = 0, j =1;

        // while(j<n){
        //     if(nums[i]!=nums[j]){   // got a unique element
        //         i++;
        //         nums[i] = nums[j];
        //     }
        //     j++;
        // }
        // return i+1;   // to find the unique element


          unordered_map<int, bool> seen;
    vector<int> result;

    for (int num : nums) {
        if (seen.find(num) == seen.end()) {  // If not found in map, it's unique
            result.push_back(num);
            seen[num] = true;  // Mark as seen
        }
    }

    nums = result;  // Copy result back to nums
    return result.size();  // Return count of unique elements
    }
};