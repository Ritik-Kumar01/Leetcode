class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;

        for (int i = 0; i < n; i++) { // Start index
            for (int j = i; j < n; j++) { // End index
                if ((j - i + 1) % 2 != 0) { // Check if length is odd
                    for (int k = i; k <= j; k++) { // Sum the subarray
                        sum += arr[k];
                    }
                }
            }
        }
        return sum;
    }
};
