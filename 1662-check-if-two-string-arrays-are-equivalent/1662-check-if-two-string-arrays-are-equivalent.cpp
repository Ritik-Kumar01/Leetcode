class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans, ans1;

        for(string &w : word1) ans+=w;
        for(string &w1 : word2) ans1+=w1;

        return ans==ans1;
    }
};