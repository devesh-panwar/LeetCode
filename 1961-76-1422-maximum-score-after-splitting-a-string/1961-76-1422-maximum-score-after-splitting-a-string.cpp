class Solution {
public:
    int maxScore(string s) {
        int n=s.size(),ans=INT_MIN;

        for(int i=1;i<n;i++){

            string l=s.substr(0,i);
            string r=s.substr(i,n-(i));
            int l_s=0,r_s=0;
            for(int j=0;j<l.size();j++){
                if(l[j]=='0') l_s++;
            }
            for(int j=0;j<r.size();j++){
                if(r[j]=='1') r_s++;
            }

            ans=max(ans,(l_s+r_s));

        }
        return ans;


    }
};