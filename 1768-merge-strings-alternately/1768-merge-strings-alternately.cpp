class Solution {
public:
    string mergeAlternately(string word1, string word2) {

    //  string result ="";
    //  int i = 0;
    //  while(i<word1.length() || i<word2.length()){
    //     if(i<word1.length()){
    //         result += word1[i];
    //     }
    //     if(i<word2.length()){
    //         result += word2[i];
    //     }
    //     i++;
    //  }   
    //  return result;


    string result = "";
    int i = 0;

    while(word1.length()>i || word2.length()>i){
        if(word1.length()>i){
            result +=word1[i];
        }
        if(word2.length()>i){
            result += word2[i];
        }
        i++;
    }
    return result;
    }
};