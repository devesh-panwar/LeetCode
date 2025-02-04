class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int n=nums.size(),ans=nums[0],t=nums[0];
        if(n==1) return nums[0];
        for(int i=1;i<n;i++){

            if(nums[i-1]<nums[i]){
                t+=nums[i];
                ans=max(ans,t);
            }else{
                t=nums[i];
            }
        }
        return ans;
    }
};