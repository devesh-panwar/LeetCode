class Solution {
public:
    using ll=long long ;
    ll solve(ll cu,unordered_set<ll> & st,unordered_map<ll,ll> & mp){
        if(mp.count(cu)){
            return mp[cu];
        }

        if(st.count(cu * cu))
            return mp[cu]=1+solve(cu*cu,st,mp);

        return mp[cu]=0;        
    }

    int longestSquareStreak(vector<int>& nums) {
        
        unordered_set<ll>st(nums.begin(),nums.end());
        unordered_map<ll,ll>mp;
        ll ans=-1;
        ll an;
        for(ll el:nums){
            if(!mp.count(el) and st.count((ll)el *el) ){
               
            an=2+(solve((ll)el*el,st,mp));
            ans=max(ans,an);
            }
        }

        return ans;
    }
};