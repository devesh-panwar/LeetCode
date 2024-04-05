class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int fi_min=nums[0];
        int sec_mi=nums[1];
        int high=nums[nums.size()-1];


        int sec_hi=nums[n-2];
        int thi_hi=nums[n-3];

        return max(fi_min*sec_mi*high,high*sec_hi*thi_hi);
    }
};