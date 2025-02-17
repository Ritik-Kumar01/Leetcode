class Solution {
public:
    int addDigits(int num) {
    //      if (num == 0) return 0;
    // return 1 + (num - 1) % 9;

    while(num>=10){
        int sum = 0 ;
        while(num>0){
            int digit = num%10;
            sum += digit;
            num /=10;
        }
        num = sum;
    }
    return num;
    }
};