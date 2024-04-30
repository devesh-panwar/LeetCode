class Solution {
public:
    bool equalFrequency(string s) {
        
        // map<char,int>mp;
        // for(auto x:word){
        //     mp[x]++;
        // }
        // int key=mp.size();
        // int sum=0;
        // for(auto x:mp){
        //     sum+=x.second;
        // }

        
        // return ((sum-1)%key==0 || sum-key==1 ||sum-key==0 ||(sum+1)%key==0) ? true:false;

        vector<int> v(26, 0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        
        for(int i=0;i<s.size();i++){
            int currElement = s[i]-'a';
            v[currElement]--;
            int f = 0;
            bool temp = true;
            for(int i=0;i<26;i++){
                if(v[i]!=0){
                    if(f==0) f = v[i];
                    if(f!=v[i]) temp = false;
                }
            }
            if(temp) return true;
            v[currElement]++;
        }
        return false;
    }
};