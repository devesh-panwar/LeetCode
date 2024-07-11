class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<char>stck;

        for(int i=0;i<s.size();i++){

            if( stck.empty() ||s[i]!=')'){
                stck.push(s[i]);
            }else {
                queue<char>q;

                while(stck.top()!='('){
                    q.push(stck.top());
                    stck.pop();
                }

                stck.pop();

                while(!q.empty()){
                    stck.push(q.front());
                    q.pop();
                }


            }
        }

        string ans="";

        while(!stck.empty()){
            ans=stck.top()+ans;
            stck.pop();
        }
        return ans;
    }
};