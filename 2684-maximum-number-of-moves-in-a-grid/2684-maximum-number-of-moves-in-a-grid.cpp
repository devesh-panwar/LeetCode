class Solution {
public:
    
    bool check(int i,int j,vector<vector<int>> & grid){
        return ((i>=0 && j>=0 && i<grid.size() && j<grid[0].size()));
    }
    int solve(int i,int j,vector<vector<int>> & grid,int an,vector<vector<int>>&dp){
        if(dp[i][j]!=-1) return dp[i][j];

        int a=an,b=an,c=an;
        if(check(i-1,j+1,grid) && grid[i][j]<grid[i-1][j+1]){
           a=+ solve(i-1,j+1,grid,an+1,dp);
        }
        if(check(i,j+1,grid) && grid[i][j]<grid[i][j+1]){
           b= +solve(i,j+1,grid,an+1,dp);
        }
        if(check(i+1,j+1,grid) && grid[i][j]<grid[i+1][j+1]){
           c= +solve(i+1,j+1,grid,an+1,dp);
        }
        return dp[i][j]=max({a,b,c});
    }
    int maxMoves(vector<vector<int>>& grid) {        
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            
                ans=max(ans,solve(i,0,grid,0,dp));
            
        }

        return ans;
    }
};