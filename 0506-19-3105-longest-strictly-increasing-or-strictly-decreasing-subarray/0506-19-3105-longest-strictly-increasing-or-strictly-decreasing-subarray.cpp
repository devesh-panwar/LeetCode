class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int n=nums.size(),t=1,mx=1;
        if(n==1) return n;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                t++;
                mx=max(mx,t);
            }else{
                t=1;
            }
        }
t=1;
for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                t++;
                mx=max(mx,t);
            }else{
                t=1;
            }
        }
        return mx;

    }
};