class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for(int i=0;i<s.size();i++){
            if(!(s[i]>=97 && s[i]<=122) && !(s[i]>=48 &&s[i]<=57)){
                s.erase(s.begin()+i);
                i--;
            }
        } 
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }
        return true;
    }
};