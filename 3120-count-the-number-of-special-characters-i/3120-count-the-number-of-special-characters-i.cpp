class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        set<char>st;
        for(auto x:word) st.insert(x);

        int ans=0;
       for(auto x:st){
            
                if(isupper(x) ){
                char lw=x+32;
                if(st.find(lw)!=st.end()){
                    ans++;
                    auto ind=st.find(lw);
                    st.erase(ind);
                    
                }
            }else if(islower(x)  ){
                char lw=x-32;
                if(st.find(lw)!=st.end()){
                    ans++;
                    auto ind=st.find(lw);
                    st.erase(ind);
                    
                }
            }

            
        }
        return ans;
        
    }
};