class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        // sort(intervals.begin(),intervals.end());

        // vector<vector<int>> result;

        // for(auto interval : intervals){
        //      // If result is empty OR no overlap
        //     if(result.empty() || result.back()[1]<interval[0]){
        //         result.push_back(interval);
        //     }
        //      // Overlapping case
        //     else{
        //         result.back()[1] = max(result.back()[1],interval[1]);
        //     }
        // }
        // return result;


        // sort(intervals.begin(),intervals.end());

        // vector<vector<int>> interval;

        // for(auto inter :intervals){

        //     if(interval.empty() || interval.back()[1]<inter[0]){
        //         interval.push_back(inter);
        //     }

        //     else{
        //         interval.back()[1] = max(interval.back()[1],inter[1]);
        //     }
        // }
        // return interval;


        // sort(intervals.begin(),intervals.end());

        // vector<vector<int>> vec;

        // for(auto inter : intervals){
        //     if(vec.empty() || vec.back()[1]<inter[0]){
        //         vec.push_back(inter);
        //     }
        //     else{
        //         vec.back()[1] = max(vec.back()[1],inter[1]);
        //     }
        // }
        // return vec;


        sort(intervals.begin(),intervals.end());

        vector<vector<int>>vec;

        for(auto inter:intervals){

            if(vec.empty() || vec.back()[1]<inter[0]){
                vec.push_back(inter);
            }
            else{
                vec.back()[1] = max(vec.back()[1],inter[1]);
            }
        }
        return vec;
    }
};