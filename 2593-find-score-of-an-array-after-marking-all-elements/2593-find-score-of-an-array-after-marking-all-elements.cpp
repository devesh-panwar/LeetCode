class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n=nums.size();
        vector<int>ind(n);
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            ind.push_back(i);            
        }

        sort(ind.begin(),ind.end(),[&](int a ,int b){
            if(nums[a]!=nums[b]) return nums[a]<nums[b];
            return a<b;
        });
        long long sum=0;

        for (int x : ind) {
            if (vis[x])  
                continue;

            sum += nums[x];  
            vis[x] = true;  

            
            if (x > 0)
                vis[x - 1] = true;

           
            if (x + 1 < n)
                vis[x + 1] = true;
        }

        // for(int i=0;i<n;i++){
        //     if(!vis[ind[i]]){

        //         if(ind[i]<n){
        //              int nxt=ind[i]+1;
        //              vis[nxt]=true;
        //         }
        //         if(ind[i]>0){
        //             int prev=ind[i]-1;
        //             vis[prev]=true;
        //         }
        //         vis[ind[i]]=true;

        //         sum+=nums[ind[i]];
               
        //     }else continue;
        // }
        return sum;

    }
};