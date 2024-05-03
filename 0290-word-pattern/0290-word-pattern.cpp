class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        istringstream my(s);
        string st;
        vector<string> word;
        while(my>>st) word.push_back(st);

        if(pattern.size()!=word.size()) return false;

        map<string,char>mp;
        set<char>used;
        int i=0;
        for(auto x:word){
            if(mp.find(x)!=mp.end()){
               if(mp[x]!=pattern[i]) return false;
            }else{
                     mp[x]=pattern[i];
                    if(used.find(pattern[i])!=used.end()) return false;
                    used.insert(pattern[i]);
            }
            i++;
        }
         return true;

    }
};