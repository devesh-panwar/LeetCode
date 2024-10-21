class Solution {
public:
    int ans=0;
    int maxUniqueSplit(string s) {
        
        set<string>st;
        solve(0,st,s);
        return ans; 
    }

    void solve(int ind,set<string>&st,string s){
        if(ind==s.size()){
            ans=max(ans,(int)st.size());
            return;
        }
        string sub;
        for(int i=ind;i<s.size();i++){
            
            sub.push_back(s[i]);
          //  sub=s.substr(ind,(ind-i));
            if( st.find(sub)==st.end()){

                st.insert(sub);
                solve(i+1,st,s);
                st.erase(sub);

            }
        }
        return;
    }
};