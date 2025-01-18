class RecentCounter {
public:
     queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {

        if(q.size()==0){
            q.push(t);
            return 1;
        }

          int margin = t - 3000;
        
        // Remove all elements from the queue that are less than margin
        while (!q.empty() && q.front() < margin) {
            q.pop();
        }

        // Add the current time t to the queue
        q.push(t);

        // Return the current size of the queue
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */