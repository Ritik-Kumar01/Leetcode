class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // // Get the sizes of both input arrays.
        // int n = nums1.size();
        // int m = nums2.size();

        // // Merge the arrays into a single sorted array.
        // vector<int> merged;
        // for (int i = 0; i < n; i++) {
        //     merged.push_back(nums1[i]);
        // }
        // for (int i = 0; i < m; i++) {
        //     merged.push_back(nums2[i]);
        // }

        // // Sort the merged array.
        // sort(merged.begin(), merged.end());

        // // Calculate the total number of elements in the merged array.
        // int total = merged.size();

        // if (total % 2 == 1) {
        //     // If the total number of elements is odd, return the middle element as the median.
        //     return static_cast<double>(merged[total / 2]);
        // } else {
        //     // If the total number of elements is even, calculate the average of the two middle elements as the median.
        //     int middle1 = merged[total / 2 - 1];
        //     int middle2 = merged[total / 2];
        //     return (static_cast<double>(middle1) + static_cast<double>(middle2)) / 2.0;
        // }


        int i = 0 ; int j =0;
        vector<int> nums3;
        int n = nums1.size();
        int m = nums2.size();

        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                nums3.push_back(nums1[i++]);
            }
            else{
                nums3.push_back(nums2[j++]);
            }
        }

        while(i<n)  nums3.push_back(nums1[i++]);
        while(j<m)  nums3.push_back(nums2[j++]);

        int total = n + m;

        if(total%2==1){
            return  nums3[total/2];
        }

        return double(nums3[total/2] + nums3[total/2-1])/2.0;


    }
};