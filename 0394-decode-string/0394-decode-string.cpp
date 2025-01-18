class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;
        string result = "";
        int num = 0;
        
        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } else if (c == '[') {
                numStack.push(num);
                strStack.push(result);
                num = 0;
                result = "";
            } else if (c == ']') {
                int count = numStack.top();
                numStack.pop();
                string temp = strStack.top();
                strStack.pop();
                for (int i = 0; i < count; i++) {
                    temp += result;
                }
                result = temp;
            } else {
                result += c;
            }
        }
        
        return result;
    }
};
