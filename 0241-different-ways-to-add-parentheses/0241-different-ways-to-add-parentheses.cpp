class Solution {
public:
    vector<int> diffWaysToCompute(string exp) {
        

        vector<int>ans;

        for(int i=0;i<exp.size();i++){

            if(exp[i]=='-' || exp[i]=='*' || exp[i]=='+'){

                vector<int>lf=diffWaysToCompute(exp.substr(0,i));
                vector<int>rt=diffWaysToCompute(exp.substr(i+1));

                for(auto j:lf){
                    for(auto k:rt){
                        if(exp[i]=='*') ans.push_back(j*k);
                        else if(exp[i]=='+') ans.push_back(j+k);
                        else ans.push_back(j-k);
                    }
                }

            }

        }

        if(ans.size()==0) ans.push_back(stoi(exp));

        return ans;
    }
};