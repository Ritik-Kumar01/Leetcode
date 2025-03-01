class Solution {
public:
    // int solve(int j, int k , vector<int> &arr, unordered_map<int,int> &mp){
    //     int target = arr[k] - arr[j];

    //     if(mp.count(target) && mp[target]<j){  // i < j < k
    //         int i = mp[target];
    //         return solve(i,j,arr,mp)+1;   // +1 for adding k element in the sequence
    //     }
    //     return 2;
    // }

    // int lenLongestFibSubseq(vector<int>& arr) {
    //     int n = arr.size();
    //     unordered_map<int,int> mp;

    //     for(int i = 0; i<arr.size();i++){
    //           mp[arr[i]] = i;   // element -> idk
    //     }

    //     int max_length = 0 ;
    //     // j<k
    //     for(int j = 1; j<n;j++){
    //         for(int k = j+1; k<n;k++){
    //             int length = solve(j,k,arr,mp);

    //             if(length>=3){
    //                 max_length = max(max_length,length);
    //             }
    //         }
    //     }
    //     return max_length;



    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mp;

        vector<vector<int>> t(n,vector<int>(n,2));

        for(int i = 0; i<arr.size();i++){
              mp[arr[i]] = i;   // element -> idk
        }

        int max_length = 0 ;
        // j<k
        for(int j = 1; j<n;j++){
            for(int k = j+1; k<n;k++){
               int target = arr[k] - arr[j];

               if(mp.count(target) && mp[target]<j){
                int i  = mp[target];
                t[j][k] = t[i][j] + 1;
               }
               max_length = max(max_length,t[j][k]);

            }
        }
        return max_length>=3 ? max_length : 0;
    }
};