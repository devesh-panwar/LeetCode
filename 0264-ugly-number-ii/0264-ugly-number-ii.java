class Solution {
    public int nthUglyNumber(int n) {
        

         int dp[]=new int[n];

        dp[0]=1;

        int fi=0;
        int se=0;
        int th=0;

        for(int i=1;i<n;i++){
            int a=dp[fi]*2;
            int b=dp[se]*3;
            int c=dp[th]*5;

            dp[i]=Math.min(a,Math.min(b,c));

            if(a==dp[i]) fi++;
            if(b==dp[i]) se++;
            if(c==dp[i]) th++;


        }

        return dp[n-1];
    }

    
}