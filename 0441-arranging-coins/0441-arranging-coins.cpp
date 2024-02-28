class Solution {
public:
    int arrangeCoins(int n) {
        
        if(n==1) return 1;
        int c_curr=1;
        int step=0;
        while(n>=0){
            n-=c_curr;
            c_curr++;
            step++;
        }

        return step-1;
    }
};