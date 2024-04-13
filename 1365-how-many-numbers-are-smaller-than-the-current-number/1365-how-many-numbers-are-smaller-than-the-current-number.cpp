class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int>aux;
        vector<int>ans(nums.size());
        aux=nums;
        sort(aux.begin(),aux.end());

        for(int i=0;i<nums.size();i++){

           
            {

                ans[i]=find(aux.begin(),aux.end(),nums[i])-aux.begin();
            }
        }
       
          

        return ans;
    }
};