class Solution {
public:
    int passThePillow(int n, int time) {
        
        int rounds = time/(n-1);
        int ans = 0;
        if(rounds%2 == 0){
            ans = (1+time%(n-1));
        }else{
            ans = (n-time%(n-1));
        }
        
        return ans;

        // int gp=n-1;

        // int i=abs(gp-time);
        // if(i==0){
        //         return n;
        // }

        // return i;
    }
};