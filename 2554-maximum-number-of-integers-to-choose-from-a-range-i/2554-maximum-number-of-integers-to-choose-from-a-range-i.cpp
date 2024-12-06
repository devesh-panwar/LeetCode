class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        set<int>st(banned.begin(),banned.end());
        int sum=0,ans=0;
        for(int i=1;i<=n;i++){

            if(st.find(i)==st.end()){
                if(sum+i<=maxSum){
                sum+=i;
                ans++;}
            else{
                break;
            }

            }
        }

        return ans;
    }
};