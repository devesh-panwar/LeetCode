class Solution {
public:
    int solve(vector<int>&nums){

        int prev=nums[0],prev2=0;

        for(int i=1;i<nums.size();i++){

            int take=nums[i];
            if(i>1) take+=prev2;
            int nt_take=prev;

            int curr=max(nt_take,take);
            prev2=prev;
            prev=curr;
        }

        return prev;

    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int>st1,st2;
        for(int i=0;i<nums.size();i++){
            if(i!=0) st1.push_back(nums[i]);
            if(i!=nums.size()-1) st2.push_back(nums[i]);
        }
     return max(solve(st1),solve(st2));
     
    }
};