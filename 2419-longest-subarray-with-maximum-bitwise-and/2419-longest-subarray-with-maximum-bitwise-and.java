class Solution {
    public int longestSubarray(int[] nums) {
        

        int mx=0;

        for(int i:nums){
            mx=Math.max(i,mx);
        }
        
        int ans=1,count=0;
        for(int i:nums){

            if(i==mx){
                count++;
            }else{
                count=0;
            }

            ans=Math.max(ans,count);
        }

        return ans;

    }
}