class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
     int n = arr.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(arr[i]%2!=0 && arr[j]%2!=0 && arr[k]%2!=0){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};