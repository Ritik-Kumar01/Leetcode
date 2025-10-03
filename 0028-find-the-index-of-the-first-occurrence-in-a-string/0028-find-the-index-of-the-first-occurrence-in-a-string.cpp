class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // int pos = haystack.find(needle);

        // if(pos== string::npos){
        //     return -1;
        // }

        // return pos;

        int n = haystack.size();
        int m = needle.size();


        if (m==0) return 0;

        for(int i=0; i<=n-m; i++){
        int j = 0;
           
           while(haystack[i+j]==needle[j]){
            j++;
           }

           if(j==m) return i;

        }
        return -1;
    }
};