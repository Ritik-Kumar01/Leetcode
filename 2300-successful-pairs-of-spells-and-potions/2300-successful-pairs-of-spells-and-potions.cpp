class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       
       int count = 0;
       vector<int> vec;
        for(int i=0;i<spells.size();i++){
            count = 0;
            for(int j = 0 ; j<potions.size();j++){
                if((long long)spells[i]*potions[j]>=success){
                    count++;
                    
                }
            }
                vec.push_back(count);
        }
     
        return vec;
    }
};