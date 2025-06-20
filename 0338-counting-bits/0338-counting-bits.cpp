class Solution {
public:
    vector<int> countBits(int n) {
    //     vector<int>vec;

    // for(int i=0;i<=n;i++){

    //     int num = i;

    //     int count =0;
    //     while(num>0){
    //         if(num % 2==1)count++;
    //         num = num /2;

    //     }
    //    vec.push_back(count);
    // }
    // return vec;


    vector<int> vec(n+1);

    for(int i=0;i<=n;i++){
        vec[i] = __builtin_popcount(i);
    }
    return  vec;
    }
};