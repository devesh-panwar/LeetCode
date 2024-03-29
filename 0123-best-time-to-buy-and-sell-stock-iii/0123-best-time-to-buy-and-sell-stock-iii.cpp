class Solution {
public:
    int solve(int ind,int buy,vector<int>prices,int cap,vector<vector<vector<int>>>&dp){
        if(ind==prices.size() || cap==0) return 0;

        if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
        if(buy){
            return dp[ind][buy][cap]= max(-prices[ind]+solve(ind+1,0,prices,cap,dp),0+solve(ind+1,1,prices,cap,dp));

        }
        return dp[ind][buy][cap]=max(prices[ind]+solve(ind+1,1,prices,cap-1,dp),0+solve(ind+1,0,prices,cap,dp));
    }
    int maxProfit(vector<int>& prices) {
        
       // vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
        //return solve(0,1,prices,2,dp);

        vector<vector<vector<int>>>dp(prices.size()+1,vector<vector<int>>(2,vector<int>(3,0)));
        for(int i=prices.size()-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                for(int cap=1;cap<=2;cap++){
                    if(buy){
                        dp[i][buy][cap]= 
                        max(-prices[i]+dp[i+1][0][cap],dp[i+1][1][cap]);
                    }
                    else{
                        dp[i][buy][cap]=
                        max(prices[i]+dp[i+1][1][cap-1],dp[i+1][0][cap]);
                    }
                }
            }
        }
        return dp[0][1][2];
    }
};