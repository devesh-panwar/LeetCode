class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        
        int sumA=accumulate(A.begin(),A.end(),0);
        int sumB=accumulate(B.begin(),B.end(),0);

        set<int>st;
        for(auto x:B){
            st.insert(x);
        }

        int diff=(sumB-sumA)/2;

        for(auto x:A){

                if(st.find(x+diff)!=st.end()){
                    return {x,x+diff};
                }
        }
        return {};
    }
};