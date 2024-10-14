class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        
        priority_queue<int>pq;
        long long ans=0;
        for(auto x:nums){
            pq.push(x);
        }

        while(k>0){
            double t=pq.top();
            pq.pop();
            ans+=t;
            pq.push(ceil((t/3)));

            k--;
        }

        return ans;
    }
};