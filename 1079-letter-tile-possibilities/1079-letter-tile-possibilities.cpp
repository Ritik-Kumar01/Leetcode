class Solution {
public:
  int n;
    void solve(string &tiles,vector<bool> &used, unordered_set<string> &result,string curr){
        result.insert(curr);

        for(int i = 0 ; i<n;i++){  // always starts from 0
               
               if(used[i]==true){
                continue;
               }
               used[i] = true;
               curr.push_back(tiles[i]);

               solve(tiles,used,result,curr);

               used[i] = false;
               curr.pop_back();
        }
    }

    int numTilePossibilities(string tiles) {

         n = tiles.length();

        vector<bool> used(n,false);
        unordered_set<string> result;

        string curr = "";
        solve(tiles,used,result,curr);

        return result.size()-1;  // excluding empty sequence
        
    }
};