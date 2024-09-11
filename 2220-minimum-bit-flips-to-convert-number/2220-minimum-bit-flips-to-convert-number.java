class Solution {
    public int minBitFlips(int start, int goal) {
        
        int c=0;
        boolean st=true,gl=true;
        while((st) ||  (gl)){

            if((start & 1)!=(goal & 1)){
                c++;

            }

            start=start>>1;
            goal=goal>>1;
            if(start==0) st=false;
             if(goal==0) gl=false;
        }

        return c;
    }
}