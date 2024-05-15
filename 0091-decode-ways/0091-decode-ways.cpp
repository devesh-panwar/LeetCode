class Solution {
public:int c=0;
    int solve(int ind,string s,vector<int> &dp){

        if(ind==s.size()) return 1;

        if(s[ind]=='0') return 0;
        if(dp[ind]!=-1) return dp[ind];
        
        int one=solve(ind+1,s,dp);

        int two=0;

        if(ind+1<s.size() &&((s[ind]=='1') ||(s[ind]=='2' && s[ind+1]<='6')))
            two=solve(ind+2,s,dp);

        return dp[ind]=one+two;
        // if(ind>=s.size()){
        //     c++;
        //     return ;
        // }

        // if(mp.find(s[ind]-'0')!=mp.end()) solve(ind+1,s,mp);

        // if(ind+1<s.size()){
        //    // int dig=(s[ind]+s[ind+1])-'0';
        //    int twoDigit = (s[ind] - '0') * 10 + (s[ind + 1] - '0');
        //     if(mp.find(twoDigit)!=mp.end() && s[ind]!='0') solve(ind+2,s,mp);
        // }
        // return;

    }
    int numDecodings(string s) {
        
       // map<int,char>mp;

        // for(int i=1;i<=26;i++) mp[i]='A'+(i-1);
        // if(s.front()=='0') return 0;
        vector<int>dp(s.size()+1,-1);
      return  solve(0,s,dp);

        // return c;
    }
};


        
   