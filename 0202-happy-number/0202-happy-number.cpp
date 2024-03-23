class Solution {
public:
    bool isHappy(int n) {
        int sum=n;
        set<int>st;
        st.insert(n);
        while(sum!=1){
            int sum2=0;
            while(sum){
                int di=sum%10;
                sum/=10;
                sum2+=di*di;
            }
            sum=sum2;
           if(st.find(sum)!=st.end()){ break;
           /// st.insert(sum);
           } else{
            st.insert(sum);
           }
        }
        if(sum==1) return true;
        return false;

        
    }
};