class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> maxheap;

        int fuel = startFuel, i=0, stops=0;

        while(fuel<target){
            while(i<stations.size() && stations[i][0]<=fuel){
                maxheap.push(stations[i][1]);
                i++;
            }

            if(maxheap.empty()) return -1;

            fuel += maxheap.top();
            maxheap.pop();
            stops++;
        }
        return stops;
        
    }
};