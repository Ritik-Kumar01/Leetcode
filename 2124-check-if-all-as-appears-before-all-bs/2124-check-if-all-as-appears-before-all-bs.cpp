class Solution {
public:
    bool checkString(string s) {
        bool foundB = true;

        for(char c : s){
            if(c=='a' && foundB==false){
                return false;
            }

            else if(c=='b'){
                foundB = false;
            }
            
        }
        return true;
    }
};