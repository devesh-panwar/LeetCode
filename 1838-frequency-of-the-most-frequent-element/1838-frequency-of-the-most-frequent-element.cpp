class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long int ttl=0,l=0,ans=0,j=0; 
        for(int i=0;i<n;i++){
            ttl+=nums[i];
            while((l+1<=i )&&((nums[i]*(i-l+1))> (k+ttl))){
                ttl-=nums[l];
                l++;
        }
        ans=max(ans,i-l+1);
        

        }
        return ans;
    }
};