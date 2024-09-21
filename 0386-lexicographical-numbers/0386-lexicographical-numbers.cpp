class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(to_string(i));
        }

        // sort(ans.begin(),ans.end(),[](int a ,int b){
        //     string a_s=to_string(a);
        //     string b_s=to_string(b);
        //     if(a_s[0]<b_s[0]) return true;
        //     else if((a_s[0]==b_s[0]) && (a_s[1]<b_s[1])) return true;
        //     else return false; 
        // });

        sort(ans.begin(),ans.end());
        vector<int>ans2;
        for(auto x:ans){
            ans2.push_back(stoi(x));
        }
        return ans2;
    }
};