class Solution {
public:
    string makeFancyString(string s) {
        
        stack<char>st;
        string ss="";
        char prev='1';
        int c=0;
       

        for(long long i=0;i<s.size();i++){

            if(s[i]!=prev){
                prev=s[i];
                c=0;
            }
            else{
                c++;
            }
            if(c<2){
                ss+=s[i];
            }
            
        }

        return ss;
    }
};