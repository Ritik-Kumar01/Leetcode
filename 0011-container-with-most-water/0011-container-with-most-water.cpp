class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0 ; 
        int right = height.size()-1;
        int maxarea = INT_MIN;

        while(left<right){
            int breadth = right-left;

            int heigt = min(height[left],height[right]);
            int area = breadth * heigt;

            maxarea = max(maxarea,area);

            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxarea;
    }
};