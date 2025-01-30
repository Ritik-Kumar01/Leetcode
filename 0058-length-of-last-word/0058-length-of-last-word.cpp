class Solution {
public:
    int lengthOfLastWord(string s) {

        // int count =0 ;  
        // for(int i = s.length()-1 ; i>=0;i--){

        //     if(s[i]!=' '){
        //         count++;
        //     }
        //     else{
        //         if(count>0){
        //             return count;
        //         }
        //     }
        // }
        // return count;


        int n = s.length();
        int i = n-1;
        int length=0;

        while(i>=0 && s[i]==' '){
            i--;
        }

        while(i>=0 && s[i]!=' '){
            i--;
            length++;
        }
        return length;
    }
};