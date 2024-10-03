class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        
        int targt=0,n=nums.size();

        for(auto x:nums){
            targt=(targt+x)%p;
        }

        if(targt==0) return 0;
        int curr=0;

        unordered_map<int,int>mp;

        mp[0]=-1;
        int ans=n;
        for(int i=0;i<nums.size();i++){

            curr=(curr+nums[i])%p;
           int rm= (curr-targt + p)%p;
            if(mp.find(rm)!=mp.end()){
                ans=min(ans,i-mp[rm]);
            }
            mp[curr]=i;
            
        }
        return ans==n ?-1 :ans;

    }
};