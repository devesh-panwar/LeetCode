class Solution {
public:
    bool solve(int ind1,int ind2,int ind3,string s1,string s2,string s3,vector<vector<vector<int>>>&dp){
        if(ind3==s3.size() && ind2==s2.size() && ind1==s1.size()) return 1;

        if(ind3==s3.size()) return 0;

        if(dp[ind1][ind2][ind3]!=-1) return dp[ind1][ind2][ind3];
        bool p1=false,p2=false;
        if(ind1<s1.size() && s1[ind1]==s3[ind3]) p1=solve(ind1+1,ind2,ind3+1,s1,s2,s3,dp);

        if( ind2 <s2.size() && s2[ind2]==s3[ind3]) p2=solve(ind1,ind2+1,ind3+1,s1,s2,s3,dp);

        return dp[ind1][ind2][ind3]=p1 || p2;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.size();
        int n2=s2.size();
        int n3=s3.size();
        vector<vector<vector<int>>>dp(n1+1,vector<vector<int>>(n2+1,vector<int>(n3+1,-1)));

        return solve(0,0,0,s1,s2,s3,dp);
    }
};