class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       
    //    int count = 0;
    //    vector<int> vec;
    //     for(int i=0;i<spells.size();i++){
    //         count = 0;
    //         for(int j = 0 ; j<potions.size();j++){
    //             if((long long)spells[i]*potions[j]>=success){
    //                 count++;
                    
    //             }
    //         }
    //             vec.push_back(count);
    //     }
     
    //     return vec;


    int m = spells.size();
    int n = potions.size();
    
    sort(begin(potions),end(potions));

    int maxPotionvalue = potions[n-1];
    vector<int> ans;

    for(int i =0 ; i<m ;i++){
        int spell = spells[i];
         
         // minPotion * spell >=success
        long long minPotion = ceil((1.0*success)/spell);

        if(minPotion> maxPotionvalue){
            ans.push_back(0);
            continue;
        }

        int index = lower_bound(begin(potions),end(potions),minPotion) - begin(potions);

        int count = n -index; 
        ans.push_back(count);
    }
    return ans;
    }
};