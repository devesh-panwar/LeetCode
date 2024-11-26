class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        
        vector<int>vt(n,0);
        int ans=-1,count=0;
        for(auto x:edges){
            vt[x[1]]++;
        }

        for(int i=0;i<n;i++){

            if(vt[i]==0) {
                ans=i;
                count++;
            }
            if(count>1){
                return -1;
            }
        }
        return ans;
    }
};