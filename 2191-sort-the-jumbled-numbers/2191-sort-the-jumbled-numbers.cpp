class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        
        vector<int>mapped,ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            string str_num=to_string(num);

            int el=0;
            while(str_num.size()>0){
                char ch=str_num.front();
                str_num.erase(0,1);
                int con=mapping[ch-'0'];

                el=el*10+con;
            }
            mapped.push_back(el);
        }

        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
             mp[mapped[i]].push_back(nums[i]);
            
        }
        for(auto x:mp){
            while(x.second.size()>0){
                ans.push_back(x.second[0]);
                x.second.erase(x.second.begin());
            }
        }
        return ans;
    }
};