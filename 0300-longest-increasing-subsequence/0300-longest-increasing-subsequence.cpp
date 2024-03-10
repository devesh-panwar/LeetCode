class Solution {
public:
    
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int>st(nums.size(),1);
        
        for(int i=1;i<nums.size();i++){

            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] && st[j]+1>st[i]){

                    st[i]=st[j]+1;
                }
                }            
        }

        return *max_element(st.begin(),st.end());
    }
};