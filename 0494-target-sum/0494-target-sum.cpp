class Solution {
public:
int c=0;
    void solve(int ind,vector<int>& nums,int target,long c_sum){

        if(ind==nums.size()){
            if(c_sum==target){
                c++;

            }
            return ;
        }

        solve(ind+1,nums,target,c_sum+nums[ind]);
        solve(ind+1,nums,target,c_sum-nums[ind]);

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        solve(0,nums,target,0);

        return c;
    }
};