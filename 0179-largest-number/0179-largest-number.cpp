class Solution {
public:

  static bool com(string a,string b){
     if(a+b > b+a) return true;
     else return false;
 }
    string largestNumber(vector<int>& nums) {
        

        vector<string>helper;
        string ans;
        for(auto X:nums){
            helper.push_back(to_string(X));
        }

        sort(helper.begin(),helper.end(),com);
        for(int i=0;i<helper.size();i++){
            //ans.append(helper[i]);
            ans+=helper[i];
        }

         int i=0;
         while(i<ans.size()-1 && ans[i]=='0') i++;

         return ans.substr(i);
       
    }
};