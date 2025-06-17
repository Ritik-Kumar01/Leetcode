class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0 ;
        int end = height.size()-1;
        int maxarea = 0;

        while(start<end){
            int length = end-start;

            int breadth = min(height[start],height[end]);

            int area = length * breadth;

            maxarea = max(maxarea, area);


            if(height[start]>height[end]){
                end--;
            }
            else{
                start++;
            }
        }
        return maxarea;
        
    }
};