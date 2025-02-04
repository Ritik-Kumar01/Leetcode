class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1; i>=0;i--){
            if(digits[i]==9){
                digits[i] = 0;
            }
            else{
                digits[i]++;
                return digits;
            }
        }
          // If all digits were 9, we need a new array of size n+1
        vector<int> newDigits(digits.size() + 1, 0);
        newDigits[0] = 1;  // Set the first digit to 1
        
        return newDigits;
    }
};