class Solution {
public:
    string smallestNumber(string pattern) {
        stack<int> st;
        int n = pattern.length();

        string ans = "";

        for(int i=0;i<n+1;i++){
            st.push(i+1);
            if(i==n || pattern[i]=='I'){
                while(!st.empty()){
                    ans +=to_string(st.top());
                    st.pop();
                }
            }
        }
        return ans;
        
    }
};