class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        vector<vector<int>>ans(m,vector<int>(n));

        int m1=original.size();
        
        int k=0;
        if(m1==m*n){

            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    ans[i][j]=original[k++];
                }
            }


        }else{
            return {};
        }

        return ans;
    }
};