class Solution {
public:
    bool isSubsequence(string s, string t) {

        // int i = 0; 
        // int j = 0;

        // while(i<s.length()  && j<t.length()){
        //    if(s[i] == t[j]){
        //     i++;
        //     j++;
        //    }
        //    else{
        //     j++;
        //    }
        // }
        // return (i==s.length());



        int i = 0;
        int j = 0;

        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
            j++;}
        }
        return (i==s.length());
    }
};