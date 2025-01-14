class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        

        vector<int>ans;
        int n=A.size();

        for(int i=0;i<n;i++){
            set<int>st;
            int t=0;
            for(int j=0;j<=i;j++){
                st.insert(A[j]);
            }
            for(int j=0;j<=i;j++){

                if(st.find(B[j])!=st.end()){
                    t++;
                }
            }
            ans.push_back(t);
            
        }

        return ans;
    }
};