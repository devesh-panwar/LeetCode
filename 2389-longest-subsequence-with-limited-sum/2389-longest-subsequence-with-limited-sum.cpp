class Solution {
public: 

// exponential time complexity

// int len=INT_MIN;
//     int solve(int ind,vector<int>& nums,int tar,int c_sum,int c_len){

//         if(ind==nums.size()) return c_len;
//        int l=0;
//        if(c_sum+nums[ind]<=tar) l=solve(ind+1,nums,tar,c_sum+nums[ind],c_len+1);

//         int r=solve(ind+1,nums,tar,c_sum,c_len);
        
        
//        return max(l,r);


//     }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        for(auto x:queries){
            ans.push_back(upper_bound(nums.begin(),nums.end(),x)-nums.begin());
        }
        return ans;
        // vector<int>ans;
        // for(int i=0;i<queries.size();i++){
        //    int j= solve(0,nums,queries[i],0,0);
        //    ans.push_back(j);
        // }

        // return ans;
    }
};

