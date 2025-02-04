// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if(strs.empty()) return "";

//         sort(strs.begin(),strs.end());

//         string first = strs[0];
//         string last = strs[strs.size()-1];

//         int i = 0 ;
//         while(i<first.length() && first[i]==last[i]){
//             i++;
//         }
//         return first.substr(0,i);
//     }
// };



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        sort(strs.begin(),strs.end());

        string first = strs[0];
        string last = strs[strs.size()-1];
        string result = "";

        for(int i=0;i<first.length();i++){
              if(first[i]!=last[i]){
                break;
              }
              result.push_back(first[i]);  // or result+=first[i];
        }
        return result;
    }
};