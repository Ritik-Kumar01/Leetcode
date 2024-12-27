class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int maxi = 0 ;
        vector<int>trip(n+1,0);
        for(int i = 0 ; i<n;i++){
            trip[i+1] = trip[i] + gain[i];
            maxi = max(maxi,trip[i+1]);
        }
        return maxi;
    }
};