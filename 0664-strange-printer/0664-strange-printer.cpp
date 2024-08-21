class Solution {
public:


    int strangePrinter(string s) {
        int n = s.size();
        vector<vector<int>> memo(n, vector<int>(n, -1));
        return dp(s, 0, n - 1, memo);
    }

private:
    int dp(string& s, int i, int j, vector<vector<int>>& memo) {
        if (i > j) return 0;
        if (memo[i][j] != -1) return memo[i][j];

        int result = dp(s, i + 1, j, memo) + 1;
        for (int k = i + 1; k <= j; ++k) {
            if (s[k] == s[i]) {
                result = min(result, dp(s, i, k - 1, memo) + dp(s, k + 1, j, memo));
            }
        }

        memo[i][j] = result;
        return result;
    }

    // int solve(int i,int j,vector<vector<int>>&dp,string s){
    //     if(i==j) return 1;

    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int turn =INT_MAX;
    //     for(int k=i;k<j;k++){
    //         turn =min(turn ,solve(i,k,dp,s)+solve(k+1,j,dp,s));
    //     }
    //     return dp[i][j]=(s[i]==s[j]) ?turn -1: turn;
    // }
    // int strangePrinter(string s) {
        
    //     int n=s.size();
    //     vector<vector<int>>dp(n,vector<int>(n,-1));

    //     return solve ( 0,n-1,dp,s);

    //        }
};