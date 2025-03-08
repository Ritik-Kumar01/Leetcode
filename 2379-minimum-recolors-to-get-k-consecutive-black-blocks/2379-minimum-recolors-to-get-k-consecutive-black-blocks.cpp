class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        // int n = blocks.length();
        // int result = k; // Initialize result with the maximum possible value
        
        // for (int i = 0; i <= n - k; i++) { // Ensure valid range
        //     int W = 0;
        //     for (int j = i; j < i + k; j++) { // Iterate over the k-length window
        //         if (blocks[j] == 'W') {
        //             W++;
        //         }
        //     }
        //     result = min(result, W); // Update the minimum number of recolors
        // }
        
        // return result;

        int n = blocks.size();
        int i = 0; 
        int j = 0;

        int ops = k;
        int W = 0;

        while(j<n){
            if(blocks[j]=='W'){
                W++;
            }

            if(j-i+1 == k){
                ops = min(ops,W);

                if(blocks[i] == 'W'){
                    W--;
                }
                i++;
            }
            j++;

        }
        return ops;
    }
};
