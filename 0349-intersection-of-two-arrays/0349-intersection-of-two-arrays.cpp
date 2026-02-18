class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // unordered_set<int>mp;

        // for(int i=0;i<nums1.size();i++){
        //     mp.insert(nums1[i]);
        // }
        
        // vector<int>result;
        // for(int x: nums2){   // mp.find(x)!=mp.end()
        //     if(mp.count(x)>0){
        //         result.push_back(x);
        //         mp.erase(x);
        //     }

        // }
        // return result;



        unordered_set<int> st;

        for(int i=0;i<nums1.size();i++){
            st.insert(nums1[i]);
        }


        vector<int> vec;

        for(int x : nums2){
            if(st.count(x)>0){
                vec.push_back(x);
            }
            st.erase(x);
        }
        return vec;
    }
};