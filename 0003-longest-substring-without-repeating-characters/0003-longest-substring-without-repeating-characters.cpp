class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n = s.length();
        // int maxLength = 0;
        // unordered_set<char> charSet;
        // int left = 0;
        
        // for (int right = 0; right < n; right++) {
        //     if (charSet.count(s[right]) == 0) {
        //         charSet.insert(s[right]);
        //         maxLength = max(maxLength, right - left + 1);
        //     } else {
        //         while (charSet.count(s[right])) {
        //             charSet.erase(s[left]);
        //             left++;
        //         }
        //         charSet.insert(s[right]);
        //     }
        // }
        
        // return maxLength;

         int hash[256] = {-1}; // Stores last occurrence of each character
        int n = s.length();
        int l = 0;
        int r = 0;
        int maxlen = 0;

        while (r < n) {
            if (hash[s[r]] != -1 && hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }
            hash[s[r]] = r; // Update last occurrence
            maxlen = max(maxlen, r - l + 1);
            r++; // Increment r to move forward
        }
        return maxlen;
    }
};