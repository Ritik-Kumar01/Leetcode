class Solution {
public:
    int maxArea(vector<int>& height) {
        // int n = height.size();

        // int i = 0 , j = n-1;

        // int maxamount = 0;

        // while(i<j){
        //     int width = j - i;

        //     int h = min(height[i],height[j]);

        //     int area = width * h;

        //     maxamount = max(maxamount,area);

        //     if(height[i]>height[j]){
        //         j--;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // return maxamount;
    //     int heightt ;
    //     int width = 1;
    //     int area = 1;
    //     int maxarea=0;
    //     for(int i = 0 ; i<height.size();i++){
    //         for(int j=i+1; j<height.size();j++){
    //              heightt= min(height[i],height[j]);
    //             width = j - i;
    //              area = heightt*width;
    //              maxarea = max(maxarea,area);
    //         }
    //     }
    //     return maxarea;
    // }


    // int i = 0 ;
    // int j = height.size()-1;
    // int maxarea  = 0;

    // while(i<j){
    //     int width = j - i;

    //     int heightt = min(height[i],height[j]);

    //     int area = heightt * width;

    //      maxarea = max(maxarea,area);

    //      if(height[i]>height[j]){
    //         j--;
    //      }
    //      else{
    //         i++;
    //      }
    // }
    //      return maxarea;


    // int i = 0; 
    // int maxarea = 0;
    // int j = height.size()-1;

    // while(i<j){
    //     int width  = j -  i ;
    //     int heightt = min(height[i],height[j]);

    //     int area = width * heightt;

    //     maxarea = max(maxarea,area);

    //     if(height[i]>height[j]){
    //         j--;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    // return maxarea;


    int i = 0 ; int j=height.size()-1;
    int maxarea = 0;

    while(i<j){
        int width = j - i;

        int heightt = min(height[i],height[j]);

        int area = width * heightt;

        maxarea = max(area,maxarea);

        if(height[i]>height[j]){
            j--;
        }
        else{
            i++;
        }
    }
    return maxarea;
    }
};