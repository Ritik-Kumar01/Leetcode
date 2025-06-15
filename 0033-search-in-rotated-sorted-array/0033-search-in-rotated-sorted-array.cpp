class Solution {
public:
    int pivot(vector<int>& nums, int n) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }

    int binarysearch(int l, int r, vector<int>& nums, int target) {
        int idx = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] == target) {
                idx = mid;
                break;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return idx;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot_index = pivot(nums, n);

        int idx = binarysearch(0, pivot_index - 1, nums, target);
        if (idx != -1) {
            return idx;
        }

        idx = binarysearch(pivot_index, nums.size() - 1, nums, target);
        return idx;
    }
};
