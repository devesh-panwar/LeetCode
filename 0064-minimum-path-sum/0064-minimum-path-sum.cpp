class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&dp){

        if(i==0 && j==0) return grid[i][j];

        if(i<0 ||j<0) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];

        int left=solve(i-1,j,grid,dp);
        left+=grid[i][j];
        int right=solve(i,j-1,grid,dp);
        right+=grid[i][j];

        return dp[i][j]=min(left,right);
    }
    int minPathSum(vector<vector<int>>& grid) {

     vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));

    return solve(grid.size()-1,grid[0].size()-1,grid,dp);   
    // vector<vector<int>>dp(grid.size()+1,vector<int>(grid[0].size()+1));

    // for(int i=0;i<grid.size();i++){
    //     for(int j=0;j<grid[0].size();j++){
    //         if(i==0 && j==0) dp[i][j]=grid[i][j];
    //         else{
    //             int left=grid[i][j];
    //             if(i>0) left+=grid[i-1][j];
    //             int right=grid[i][j];
    //             if(j>0) right=grid[i][j-1];
    //             dp[i][j]=min(left,right);
    //         }
    //     }
    // }

    // return dp[grid.size()][grid[0].size()];
    }
};