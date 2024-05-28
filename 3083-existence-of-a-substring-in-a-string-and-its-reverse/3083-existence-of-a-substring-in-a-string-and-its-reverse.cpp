class Solution {
public:bool solve(string s,string sub){
    reverse(s.begin(),s.end());

    for(int i=0;i<s.size()-1;i++){
        if(s[i]==sub[0] && s[i+1]==sub[1]) return true;
    }
    return false;
}
    bool isSubstringPresent(string s) {
        if(s.size()==1) return false;
        for(int i=0;i<s.size()-1;i++){
            string sub=s.substr(i,2);
            if(solve(s,sub)) return true;
        }

        return false;
    }
};