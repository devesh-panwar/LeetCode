class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        //int lw=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        //return lw;

        int lw=0;
        int hi=nums.size()-1;

        while(lw<=hi){

            int mid=lw+(hi-lw)/2;

            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                hi=mid-1;
            }else{
                lw=mid+1;
            }
        }

        return lw;
    }
};