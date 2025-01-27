class Solution {
public:


   int apnaLowerBound(int l, int h , vector<int> &potions,int minPotion){
    int possibleindex = -1;
    int mid = 0;

    while(l<=h){
        mid = l +(h-l)/2;

        if(potions[mid]>=minPotion){
            possibleindex = mid;
            h = mid -1;
        }
        else{
            l = mid +1;
        }
    }
    return possibleindex;
   }

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

        // int index = lower_bound(begin(potions),end(potions),minPotion) - begin(potions);
        int index = apnaLowerBound(0,n-1, potions,minPotion);

        int count = n -index; 
        ans.push_back(count);
    }
    return ans;
    }
};