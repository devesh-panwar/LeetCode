class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        // while(nums.size()>1){

        //     int a=*min_element(nums.begin(),nums.end());
        //    int ind= find(nums.begin(),nums.end(),a)-nums.begin();
        //    nums.erase(nums.begin()+ind);

        //    int b=*min_element(nums.begin(),nums.end());
        //    int ind2=find(nums.begin(),nums.end(),b)-nums.begin();
        //    nums.erase(nums.begin()+ind2);

        //     ans.push_back(b);
        //     ans.push_back(a);
        // }

        sort(nums.begin(),nums.end());
        while(nums.size()>1){
           int a=nums[0];
            int b=nums[1];
            nums.erase(nums.begin());
            nums.erase(nums.begin());

            ans.push_back(b);
            ans.push_back(a);
        }

        return ans;
    }
};