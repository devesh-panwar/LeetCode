class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        
        int n=s.size();
        for(int  i=0,j=0;i<s.size();i++)
            if(i==0 || s[i]=='2')
                for(j=max(j,i+minJump);j<=min(i+maxJump,n-1);j++)
                    if(s[j]=='0')
                        s[j]='2';


        return s[n-1]=='2';
    }
};