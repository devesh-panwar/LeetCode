class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        string temp2="";
        map<string,int>mp;
        for(int i=0;i<s2.size();i++){
            if(s2[i]==' '){
               
                mp[temp2]++;
                temp2="";
            }else{
                temp2+=s2[i];
            }
        }
        mp[temp2]++;
            temp2="";
        for(int i=0;i<s1.size();i++){
            if(s1[i]==' '){
               
                mp[temp2]++;
                temp2="";
            }else{
                temp2+=s1[i];
            }
        }
        mp[temp2]++;

        vector<string>ans;
        for(auto x:mp){
            if(x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};