class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int maxi = 0 ;
         int current = 0;
        for(int i = 0 ; i<n;i++){
            current +=gain[i];
            maxi = max(maxi,current);
        }
        return maxi;
    }
};