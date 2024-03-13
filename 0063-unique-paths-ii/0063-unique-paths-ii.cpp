class Solution {
public:

    int solve(int i,int j,vector<vector<int>>& og,vector<vector<int>>&dp){
       if(i>=0 && j>=0 && og[i][j]==1) return 0;
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        
        if(dp[i][j]!=0) return dp[i][j];
         

        int up=solve(i-1,j,og,dp);
        int lf=solve(i,j-1,og,dp);
        return dp[i][j]=up+lf;

    }
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        
        vector<vector<int>>dp(og.size(),vector<int>(og[0].size(),0));
        return solve(og.size()-1,og[0].size()-1,og,dp);
    }
};