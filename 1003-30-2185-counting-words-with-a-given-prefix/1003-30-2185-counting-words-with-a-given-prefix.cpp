class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int n=pref.size(),ans=0;

        for(auto x: words){
            int n2=x.size();
            int i=0,j=0;
            while(i<n && j<n2 && pref[i]==x[j]){i++;j++;}

            if(i==n) ans++;
        }
        return ans;
    }
};