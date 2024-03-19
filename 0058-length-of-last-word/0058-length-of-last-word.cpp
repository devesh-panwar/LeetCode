
class Solution {
public:
    int lengthOfLastWord(string s) {
        

        string ans="";
        int i=s.size()-1;
        while(i>=0){

            if(s[i]!=' '){
                
                ans=s[i]+ans;
            }
            if(!ans.empty() && s[i]==' '){
                return ans.size();
            }
            i--;
        }
        return ans.size();
    }
};