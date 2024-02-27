class Solution {
public:
    int mySqrt(int x) {
        
        if(x==0 || x==1) return x;
        int start=1;
        int end=x-1;

        while(start<=end){
            int mid=start + (end - start) / 2;

            if((long long ) mid*mid==(long) x) return mid;
            else if((long long )mid*mid>(long)x) end=mid-1;
            else start=mid+1;
        }

        return end;
    }
};