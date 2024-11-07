class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int t=0;
        for(int i=0;i<32;i++){
            int tm=0;
            for(auto x:candidates){

                if(x & (1<<i)) tm++;
            }

            t=max(t,tm);
        }
        return t;
    }
};