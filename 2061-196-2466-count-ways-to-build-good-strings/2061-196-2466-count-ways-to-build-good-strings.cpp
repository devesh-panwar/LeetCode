class Solution {
public:
    int ans=0;
    void solve(int i,int zero,int one,string &tt){
        if(i==tt.size()){
            ans++;
            return ;
        }
        while(one--){
            tt.push_back('1');
        }
        solve(i,zero,one,tt);
        while(zero--){
            tt.push_back('0');
        }

       solve(i,zero,one,tt);
       return ;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        
        // for(int i=low;i<=high;i++){
        //     string tt="";
        //     solve(i,zero,one,tt);
        // }

        // return ans;


        int mod = 1e9 + 7;
        vector<int> dp(high + 1, 0);
        dp[0] = 1;
        for (int i = 0; i <= high; i++) {
            if (dp[i] > 0) {
                if (i + zero <= high) {
                    dp[i + zero] = (dp[i + zero] + dp[i]) % mod;
                }
                if (i + one <= high) {
                    dp[i + one] = (dp[i + one] + dp[i]) % mod;
                }
            }
        }

        int result = 0;
        for (int i = low; i <= high; i++) {
            result = (result + dp[i]) % mod;
        }
        return result;
    }
};