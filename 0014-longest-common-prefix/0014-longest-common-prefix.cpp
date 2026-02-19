class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(),strs.end());

        string start = strs[0];
        string end = strs[strs.size()-1];
        string result = "";

        for(int i=0;i<end.length();i++){
            if(start[i]!=end[i]){
                break;
            }
            result+=start[i];
        }
        return result;
    }
};