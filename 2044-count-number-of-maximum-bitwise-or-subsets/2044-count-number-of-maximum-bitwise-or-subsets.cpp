class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        
        int ans=0;
        for(auto x:nums){
            ans |=x;
        }

        return solve(0,ans,nums,0);
    }

    int  solve(int ind,int tg,vector<int>nums,int cur){

        if(ind==nums.size()){
            return (cur==tg)?1:0;
        }
        int pk=solve(ind+1,tg,nums,cur|nums[ind]);
        int npk=solve(ind+1,tg,nums,cur);
        return pk+npk;
    }
};