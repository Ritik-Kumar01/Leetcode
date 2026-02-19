class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // unordered_map<int,int> freq;

        // for(int i=0;i<nums.size();i++){
        //     freq[nums[i]]++;
        // }

        // vector<pair<int,int>> vec;

        // for(auto &x : freq){
        //     vec.push_back({x.second,x.first});
        // }

        // sort(vec.begin(),vec.end(),greater<>());
        
        // vector<int> result;
        // for(int i=0;i<k;i++){
        //     result.push_back(vec[i].second);
        // }
        // return result;


        unordered_map<int,int>freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        vector<pair<int,int>>vec;

        for(auto &it:freq){
            vec.push_back({it.second,it.first});
        }

        sort(vec.begin(),vec.end(),greater<>());

        vector<int>result;

        for(int i=0;i<k;i++){
            result.push_back(vec[i].second);
        }

return result;
        
    }
};