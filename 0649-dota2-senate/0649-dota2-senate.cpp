class Solution {
public:
int n;
        void removeSenator(string &senate, vector<bool>& removed, char ch, int idx){
            while(true){

                if(senate[idx] == ch && removed[idx] == false){
                    removed[idx] = true;
                    break;
                }
            idx = (idx+1)%(senate.length());   
            }
        }

    string predictPartyVictory(string senate) {

       n = senate.length();
       int R_count = count(begin(senate),end(senate), 'R');
       int D_count = senate.length() - R_count;

       int idx = 0;

       vector<bool> removed(n,false);

       while(R_count > 0 && D_count > 0){

        if(removed[idx] == false){
            if(senate[idx] == 'R'){

                removeSenator(senate, removed , 'D' , (idx+1)%(senate.length()));
                D_count--;
            }
            else{
                removeSenator(senate,removed,'R',(idx+1)%(senate.length()));
                R_count--;
            }
        }
        idx = (idx + 1 )%(n);
       }
        return R_count == 0 ? "Dire" : "Radiant";
    }
};