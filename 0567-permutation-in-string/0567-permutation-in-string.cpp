class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int>mp(26);
        int n=s1.size();
        int m=s2.size();
        if(n>m) return false;
        for(auto x:s1){
            mp[x-'a']++;
        }

        for(int i=0;i<=m-n;i++){
            vector<int>mp2(26);
            for(int j=i;j<i+n;j++){
                mp2[s2[j]-'a']++;
            }

            if(matches(mp,mp2)) return true;
        }
        return false;
    }

    bool matches(vector<int>mp1,vector<int>mp2){
        for(int i=0;i<26;i++){
            if(mp1[i]!=mp2[i]) return false;
        }
        return true;
    }
};