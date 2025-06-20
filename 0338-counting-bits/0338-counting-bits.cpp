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


    // vector<int> vec(n+1);

    // for(int i=0;i<=n;i++){
    //     vec[i] = __builtin_popcount(i);
    // }
    // return  vec;


    vector<int> result(n+1);

    if(n==0){
        return result;
    }

    result[0] = 0;

    for(int i=1; i<=n;i++){
        if(i%2!=0){
            result[i] = result[i/2]+1;
        }
        else{
            result[i] = result[i/2];
        }
    }
    return result;



    }
};