class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        
        int n=nums.size(),ind=0;
        if(n==1 || k==1) return nums;
        vector<int>ans(n-k+1,-1);
        for(int i=0;i<=n-k;i++){
            bool flg=true;
            int mx=-1;
            for(int j=i;j<i+k-1;j++){
                
                if(nums[j]+1==nums[j+1]){
                    mx=max(mx,nums[j]);
                    mx=max(mx,nums[j+1]);
                    //if(j==i+k-1) mx=max(mx,nums[j+1]);
                }   
                else { flg=false;
                    break;
                }            
            } 
            if(flg) ans[ind]=mx;
            ind++;
        }
        return ans;
    }
};