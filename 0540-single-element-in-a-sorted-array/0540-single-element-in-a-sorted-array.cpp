class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int y=0;
        for(auto x:nums){
            y^=x;
        }

        return y;
    }
};